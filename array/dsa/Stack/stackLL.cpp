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
/////
// /STACK USING LINKED LIST/

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

void push(Node*& top , int value){
    Node* newNode = new Node(value);
    newNode -> next = top;
    top = newNode;
}

void pop(Node*& top){
    if(top == nullptr){
        cout << "Stack underflow." << endl;
    }
    else{
        Node* temp = top;
        top = top -> next;
        delete temp;
    }
}

void display(Node* temp){
    if(temp == nullptr){
        cout << "Stack is empty." << endl;
    }
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* top = nullptr;
    push(top, 10);
    push(top, 20);
    push(top, 30);

    display(top);

    pop(top);
    display(top);
}