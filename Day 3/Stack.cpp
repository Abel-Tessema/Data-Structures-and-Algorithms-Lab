#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* top;

void push(int value) {
    Node* ptr = new Node;
    ptr->value = value;
    ptr->next = top;
    top = ptr;
}

bool listIsEmpty() {
    return top == NULL;
}

void pop() {
    if (listIsEmpty())
        cout << "Stack underflow." << endl;
    else {
        Node* ptr = top;
        top = top->next;
        delete ptr;
    }
}

void displayList() {
    Node* ptr = top;
    while(ptr != NULL) {
        cout << ptr->value << endl;
        ptr = ptr->next;
    }
}

void displayTop() {
    if (top != NULL)
        cout << "Top: " << top->value << endl;
    else
        cout << "No top value because list is empty." << endl;
}

int main() {
    pop();
    displayTop();
    cout << endl;

    push(1);
    push(2);
    push(3);
    displayList();
    displayTop();
    cout << endl;

    pop();
    displayTop();
    displayList();



    return 0;
}