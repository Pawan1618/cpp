#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

};
void insert_at_start(Node** head , int element){
    Node* newNode=new Node();
    newNode->data= element; 
    newNode->next=*head;
    *head=newNode;
}
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
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        insert_at_start(&head,element);
        print(head);
    }
}