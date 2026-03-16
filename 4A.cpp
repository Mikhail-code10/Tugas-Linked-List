#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void insertBelakang(int nilai){
    Node* baru = new Node;
    baru->data = nilai;
    if(head == NULL){
        head = baru;
        baru->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = baru;
    baru->next = head;
}
void deleteDepan(){
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* last = head;
    while(last->next != head){
        last = last->next;
    }
    head = head->next;
    last->next = head;
    delete temp;
}
void display(){
    Node* temp = head;
    if(head == NULL) return;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while(temp != head);
    cout << "kembali ke head" << endl;
}
int main(){

    insertBelakang(10);
    insertBelakang(20);
    insertBelakang(30);
    insertBelakang(40);

    display();

    deleteDepan();

    display();

}
