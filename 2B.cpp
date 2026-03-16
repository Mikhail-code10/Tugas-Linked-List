#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insertBelakang(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if(head == NULL) {
        head = baru;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}
void deleteTengah(int nilai) {
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL && temp->data != nilai){
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL) {
        prev->next = temp->next;
        delete temp;
    }
}
void display() { 
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    insertBelakang(10);
    insertBelakang(20);
    insertBelakang(30);
    insertBelakang(40);
    display();
    deleteTengah(30);
    display();
}
