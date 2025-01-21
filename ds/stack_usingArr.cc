#include <iostream>
using namespace std;

#define max_size 10

struct st {
    int top;
    int item[max_size];
};

void initialize(struct st *s) {
    s->top = -1;
}

bool isEmpty(struct st *s) {
    if(s->top == -1) return 1;
    else return 0;
}

bool isFull(struct st* s) {
    if(s->top == max_size - 1) return 1;
    else return 0;
}

int push(struct st *s, int data) {
    if(isFull(s)) {
        cout << "Overflow " << endl;
        return -1;
    } else {
        s->item[++s->top] = data;
        return 0;
    }
}

int pop(struct st* s) {
    if(isEmpty(s)) {
        cout << "Underflow" << endl;
        return -1;
    } else {
        return s->item[s->top--];
    }
}

int peek(struct st* s) {
    if(isEmpty(s)) return -1;
    else return s->item[s->top];
}

int sizeS(struct st* s) {
    return s->top;
}

void display(struct st* s) {
    if(!isEmpty(s)) {
        for(int i = s->top; i >= 0; i--) {
            cout << s->item[i] << " " ;
        }
        cout << endl;
    }
}

int main() {
    struct st s;
    initialize(&s);
    push(&s, 9);
    push(&s, 3);
    push(&s, 8);
    push(&s, 1);
    push(&s, 0);
    push(&s, 6);
    push(&s, 3);
    push(&s, 5);
    push(&s, 7);
    cout << sizeS(&s) << " No of element in the stack" << endl;
    cout <<  peek(&s) << " : top " << endl;;
    display(&s);
    cout << pop(&s)<< " is poped" << endl;
    cout << pop(&s)<< " is poped" << endl;
    cout << pop(&s)<< " is poped" << endl;
    cout << pop(&s)<< " is poped" << endl;
    cout << sizeS(&s) << " No of element in the stack" << endl;
    display(&s);

    return 0;
}
