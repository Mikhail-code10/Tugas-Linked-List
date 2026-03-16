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
void insertTengah(int setelah, int nilai) {
    Node* temp = head;
    while (temp != NULL && temp->data != setelah) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node* baru = new Node;
        baru->data = nilai;
        baru->next = temp->next;
        temp->next = baru;
    }
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {

    insertDepan(40);
    insertDepan(20);
    insertDepan(10);

	display();
	
    insertTengah(20, 30);

    display();
}
