#include <iostream>
using namespace std;

typedef struct {
    int top; 
    int cap;
    int* item;
} stack;

stack* createStack(int cap) {
    stack* s = new stack;
    if(!s) {
        cerr << "memory allocation falied" << endl;
        exit(1);
    }
    s->top = -1; 
    s->cap = cap;
    s->item = new int[s->cap];
 
    return s;
}

bool isEmpty(stack* s) {
    return s->top == -1; 
}

bool isFull(stack* s) {
    return s->top == s->cap - 1;
}

void resizeCap(stack* s) {
    int newCap = s->cap * 2; 
    int* newItem = new int[newCap];

    for(int i = 0; i <= s->top; i++) {
        newItem[i] = s->item[i];
    }
    delete[] s->item;
    s->cap = newCap; 
    s->item = newItem;
}

void push(stack* s, int data) {
    if(isFull(s)) {
        resizeCap(s);
    }
    s->item[++s->top] = data;
}

void pop(stack* s) {
    if(!isEmpty(s)) {
        cout << "poped element is : " << s->item[s->top--] << endl;
    } else {
        cout << "underflow " << endl;
    }
}

void peek(stack* s) {
    if(!isEmpty(s)) {
        cout << "the top most element is : " << s->item[s->top] << endl;
    }
}

void curCap(stack* s) {
    cout << "the current capacity is : " << s->cap << endl;
}

void display(stack* s) {
    if(!isEmpty(s)) {
        cout << " The elements are : ";
        for(int i = 0; i <= s->top; i++) {
            cout << s->item[i] << " ";
        }
        cout << endl;
    } else {
        cout << "empty stack " << endl;
    }
}

int main() {
    stack* s = createStack(1);
    curCap(s);
    push(s, 9);
    push(s, 4);
    curCap(s);
    push(s, 10);
    push(s, 1);
    push(s, 5);
    push(s, 33);
    curCap(s);
    push(s, 2);
    display(s);
    peek(s);
    curCap(s);
    pop(s);
    pop(s);
    pop(s);
    display(s);
    peek(s);
    curCap(s);
    
    return 0;
}


