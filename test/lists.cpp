#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

struct Node* head = NULL;

void insert(int newdata) {
    Node* newnode = new Node;
    newnode->data = newdata;
    newnode->prev = NULL;
    newnode->next = head;
    if(head != NULL)
        head->prev = newnode ;
    head = newnode;
}

void display() {
    Node* ptr;
    ptr = head;
    while(ptr != NULL) {
        ptr = ptr->next;
    }
    ptr = ptr->prev;
    while(ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->prev;
    }
}

int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}