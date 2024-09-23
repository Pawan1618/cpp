#include<iostream>
using namespace std;
#define max_size 4
int top=-1;
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;

    }
    else{
        top--;
    }
}
void push(int value){
    if(top==max_size -1){
        cout<<"stack overflow";
    }
    else{
        top++;
        arr[top]=value;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
}
int arr[max_size]; 
int n;
int main(){
    int choice;
    cout<<"1 push";
    cout<<"2 pop ";
    cout<<"3 display";
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
            int element;
            cin>>element;
            push(element);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            cout<<"enter valid choice"<<endl;
        }
    }
}