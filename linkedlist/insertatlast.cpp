#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void insert_at_last(Node** headref, int data){
    Node* newNode= new Node();
    
    newNode->data= data;
    newNode->next= nullptr;
    if (*headref == nullptr) {
        *headref = newNode;  // If the list is empty, the new node becomes the head
        return;
    }
    Node* temp= *headref;
    while (temp->next != nullptr) {
        temp = temp->next;  
    }
    temp->next = newNode;
}
void display(Node* head){
    Node* temp= head;
    while(temp != nullptr){
        cout<< temp->data<< "->";
        temp= temp->next;
    }
    cout<< "nullptr";
}

int main(){
    Node* head= nullptr;
    int n, m;
    cout<< "how many elements you want in linked list: ";
    cin >> n;
    cout<< "enter the elements of the linked list: ";
    for(int i=0; i<n; i++){
        int element;
        cin>> element;
        insert_at_last(&head, element);
    }
    
    display(head);
    
    return 0;
}
