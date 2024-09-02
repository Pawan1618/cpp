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