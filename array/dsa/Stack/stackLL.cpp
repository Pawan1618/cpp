#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};
void push(Node*& top,int value){
    Node* newNode=new Node(value);
    newNode->next=top;
    top=newNode;
}
void pop(Node*& top){
    if(top==nullptr){
        cout<<"stack underflow"<<endl;
    }
    else{
        Node* temp=top;
        top=temp->next;
        delete temp;
    }
}