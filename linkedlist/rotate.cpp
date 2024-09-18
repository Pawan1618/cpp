// You are using GCC
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int k){
        data=k;
        next=nullptr;
    }
};
void insert_at_end(Node** head, int k){
    Node* newNode=new Node(k);
    // newNode->data=element;
    // newNode->next=nullptr;
    if(*head==nullptr){
        *head=newNode;
        return ;
    }
    else{
        Node* temp=*head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
}
void rotate(Node*& head, int k){
    // check if linked list is empyt 
    if(head == nullptr|| (head->next==nullptr)){
        return;
    }
    Node* temp=head;
    int count=1;
    while(temp->next!=nullptr){
        count++;
        temp=temp->next;
    }
    temp->next=head;
    Node* newTail=head;
    for(int i=1;i<count-k;i++){
        newTail=newTail->next;
    }
    head=newTail->next;
    newTail->next=nullptr;

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
        insert_at_end(&head, element);
    }
    print(head);
    int k;
    cin>>k;

    
    rotate(head,k);
    cout<<endl;
    print(head);
    
    return 0;
}