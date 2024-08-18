#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

bool queueIsEmpty() {
    return (front == NULL) && (rear == NULL);
}

void enqueue(int value) {
    Node* ptr = new Node;
    ptr->value = value;
    ptr->next = NULL;
    if (front == NULL) {
        front = ptr;
        rear = ptr;
    }
    else {
        rear->next = ptr;
        rear = ptr;
    }
}

void dequeue() {
    if (queueIsEmpty())
        cout << "Queue is empty." << endl;
    if (front == rear) {
        delete front;
        front = rear = NULL;
    }
    else {
        Node* ptr = front;
        front = front->next;
        delete ptr;
    }
}

void displayQueue() {
    Node* ptr = front;
    while(ptr != NULL) {
        cout << ptr->value << endl;
        ptr = ptr->next;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    displayQueue();
    cout << endl;

    dequeue();
    displayQueue();

    return 0;
}