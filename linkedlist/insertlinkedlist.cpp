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
void insert_at_position(Node** head, int element, int position){
    Node* newNode= new Node();
    newNode->data=element;
    newNode->next=nullptr;
    if(position==0){
        newNode->next=*head;
        *head=newNode;
    }
    Node* temp=*head;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    if(temp==nullptr){
        cout<<"ouf of bound";
    }
    newNode->next=temp->next;
    temp->next=newNode;
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
    int element;
    int position;
    cin>>element;
    cin>>position;
    insert_at_position(&head, element, position);
    display(head);
    return 0;
}