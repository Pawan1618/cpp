#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert_at_end(Node** head, int element){
    Node* newNode=new Node();
    newNode->data=element;
    newNode->next=nullptr;
    if(*head==nullptr){
        *head=newNode;
        return;
    }
    else{
        Node* temp=*head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
}
void delete_from_start(Node** head){
    if(*head==nullptr){
        cout<<"linked list is empty";
    }
    Node* temp=*head;
    *head=(*head)->next;
    delete temp;
}
void delete_from_last(Node** head){
    if(*head==nullptr){
        cout<<"LInked list is empty";
    }
    if((*head)->next==nullptr){
        delete *head;
        *head=nullptr;
    }
    Node* temp=*head;
    
}
void display(Node* head){
    Node* temp= head;
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
        insert_at_end(&head, element);
    }
    display(head);
    return 0;
}