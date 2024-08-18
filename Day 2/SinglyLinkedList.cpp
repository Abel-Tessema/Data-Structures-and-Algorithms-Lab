#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* start = NULL;

void insertAtBegin(int newData) {
    Node* temp;
    Node* newNode = new Node;
    newNode->data = newData;
    temp = start;
    start = newNode;
    newNode->next = temp;
}

void insertAtEnd(int newData) {
    Node* q = start;
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = NULL;

    if (start == NULL) {
        start = newNode;
        cout << "Node inserted at the end." << endl;
    }
    else {
        while (q->next != NULL)
            q = q->next;
        q->next = newNode;
    }
}

void insert_after(int c, int newData){
    Node* q = start;

    Node* p = new Node;
    p->data = newData;

    for (int i = 1; i < c; i++)
       q = q->next;

    if (q == NULL)
       cout<<"Less than "<<c<<" Nodes…!";
       
    p->next = q->next;
    q->next = p;
    cout<<"Node inserted successfully";
}

void deleteFirst() {
    if (start == NULL)
        cout << "List is actually empty." << endl;
    else {
        Node* temp = start;
        start = temp->next;
        delete temp;
        cout << "First Node deleted." << endl;
    }
}

void display() {
    Node* ptr;
    ptr = start;
    while (ptr != NULL) {
        cout << ptr->data << '\t';
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    insertAtBegin(10);
    insertAtBegin(20);
    insertAtBegin(30);
    insertAtEnd(40);
    insertAtEnd(50);
    display();
    deleteFirst();
    display();


    return 0;
}