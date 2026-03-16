#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insertDepan(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = head;
    head = baru;
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout<< temp->data<< " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    insertDepan(30);
    insertDepan(20);
    
    display();
    
    insertDepan(10);

    display();
}
