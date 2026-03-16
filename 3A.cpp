#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insertEmpty(int nilai){
    Node* baru = new Node;
    baru->data = nilai;
    head = baru;
    baru->next = head;
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

    insertEmpty(10);

    display();

}
