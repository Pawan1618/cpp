#include<iostream>
using namespace std;


void delete_from_last(Node*& head){
    if(head==nullptr){
        cout<<"nothing to delete;";
        return; 
    }
    if (head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    delete temp;
}
void printList(Node* head){

}
void delete_at_position(Node*& head, int position){
    if(position==0){
        Node* temp=head;
        head=head->next;
        if(head->next!=nullptr){
            head->prev=nullptr;
        }
        delete temp;return;}
    Node* temp=head;
    for(int i=0;i<position && temp!=nullptr;i++){
        temp=temp->next;

    }
    if(temp==nullptr){
        cout<<"out of bounds1";
        return;
    }
    if(temp->next!=nullptr){
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
    else{
        temp->prev->next=nullptr;
    }
    delete temp;

}