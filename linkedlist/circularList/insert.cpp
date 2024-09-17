#include<iostream>
using namespace std;
struct Node{
    int data;
     Node* next;
     Node(int value){
        data=value;
        next=nullptr;
     }

};
void insert_at_start(Node*& head,int value){
    Node* newNode= new Node(value);
    if(head== nullptr){
        newNode->next=nullptr;
        head=newNode;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
// function to print a circular linked list 
void display(Node* head){
    if(head==nullptr){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}