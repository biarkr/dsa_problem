#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

//No of elements in the linked list 
int countNoNodes(struct Node* head ) {
    if(head == nullptr) return 0;
    else {
        struct Node* temp = head;
        int count = 0;
        while(temp != nullptr ) {
            temp = temp->next;
            count++;
        }
        return count;
    }
}

//insert at the Begining 
struct Node* insertAtBegining(struct Node* head, int data) {
    struct Node* newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    
    return newNode;
}

//insert at the End
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (Node*)malloc(sizeof(struct Node));
    // struct Node newNode = new struct Node;
    newNode->data = data;
    newNode->next = nullptr;

    if(head == nullptr) return newNode;
    else {
        struct Node* temp = head;
        while(temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }
    return head;
}

//insert at Pth position 
struct Node* insertPthPosition(struct Node* head, int data, int p) {
    struct Node* newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if(p == 0 ) {
        newNode->next = head;
        return newNode;
    } else {
        struct Node* temp = head;
        struct Node* ptemp;
        int count = 0;
        while(temp != nullptr) {
            ptemp = temp;
            temp = temp->next;
            count++; 
            if(count == p) break;
        }
        if(p > count) exit(-1);
        newNode->next = temp;
        ptemp->next = newNode;
    }
    return head;
}

//delete from begining 
struct Node* deleteFromBegin(struct Node* head) {
    if(head == nullptr) return head;
    else {
        struct Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
}

//delete from the end 
struct Node* deleteFromEnd(struct Node* head) {
    if(head == nullptr) return head;
    else if(head->next == nullptr) {
        delete head;
        return nullptr;
    }
    else {
        struct Node* temp = head;
        struct Node* ptemp = nullptr;
        while(temp->next != nullptr) {
            ptemp = temp;
            temp = temp->next;
        }
        ptemp->next = nullptr;
        delete temp;
        return head;
    }
}

//delete specified element
struct Node* deleteSpecifiedElement(struct Node* head, int data) {
    if(head == nullptr) return head;
    else {
        struct Node* temp = head;
        struct Node* temp2 = head;
        if(temp->data == data) {
            head = temp->next;
            delete temp;
            return head;
        }
        while(temp != nullptr) {
            temp2 = temp;
            temp = temp->next;
            if(temp->data == data)
                break;
        }
        if(temp == nullptr) {
            cout << "No element found!";
            return head;
        }
        temp2->next = temp->next;
        delete temp;
        return head;
    }
}

//delete entire linked list 
struct Node* deleteLinkedList(struct Node* head) {
    struct Node* temp = nullptr;
    if(head != nullptr) {
        while(head != nullptr) {
            temp = head; 
            head = head->next;
            delete temp;
        }
    }
    return nullptr;
}

//display 
void display(struct Node* head) {
    struct Node* temp = head;
    cout << "The elements of linked list are : ";
    while(temp != nullptr) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    struct Node* head = nullptr;

    head = insertAtBegining(head, 4);
    head = insertAtBegining(head, 0);
    head = insertAtBegining(head, 8);
    head = insertAtBegining(head, 5);
    display(head);
    head = insertAtEnd(head, 15);
    display(head);
    head = insertAtEnd(head, 11);
    display(head);
    head = insertAtEnd(head, 13);
    display(head);
    head = insertPthPosition(head, 29, 2);
    display(head);
    head = insertPthPosition(head, 21, 6);
    display(head);
    head = insertPthPosition(head, 26, 0);
    display(head);
    head = insertPthPosition(head, 30,10);
    display(head);
    cout << "Total No of element in the linked list : " << countNoNodes(head) << endl;
    head = deleteFromBegin(head);
    display(head);
    head = deleteFromEnd(head);
    display(head);
    head = deleteSpecifiedElement(head, 15);
    display(head);
    head = deleteLinkedList(head);
    display(head);

    return 0;
}