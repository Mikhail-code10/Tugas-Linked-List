#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insertEmpty(int nilai) {
    if (head == NULL) {
        Node* baru = new Node;
        baru->data = nilai;
        baru->next = NULL;
        head = baru;
    }
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout<<temp->data<< " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
int main() {
	
    insertEmpty(10);
    
    display();
}
