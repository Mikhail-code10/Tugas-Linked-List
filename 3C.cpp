#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void insertDepan(int nilai){
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
    baru->next = head;
    temp->next = baru;
    head = baru;
}
void insertTengah(int setelah, int nilai){
    Node* temp = head;
    do{
        if(temp->data == setelah){
            Node* baru = new Node;
            baru->data = nilai;
            baru->next = temp->next;
            temp->next = baru;
            return;
        }
        temp = temp->next;
    }while(temp != head);
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

    insertDepan(40);
    insertDepan(20);
    insertDepan(10);

    display();

    insertTengah(20,30);

    display();

}
