// inserting elements at the front 
// first line of input consist of an integers n. rep teh no. of elem to be inserted
// the second line of input n rep the element to be inserted in linked list
// the third line of input of an integer m representing the valu to be inserted at the front
// of linked list 
// output 
// the first line of output displaying created linked list 
// the second output display final list 
// test case 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert_at_start(Node** head, int element){
    Node* newNode = new Node();
    newNode->data= element;
    newNode->next= *head;
    *head=newNode;
}

void display(Node* head){
    Node* temp= head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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
        insert_at_start(&head, element);
    }
    
    display(head);
    
    return 0;
}