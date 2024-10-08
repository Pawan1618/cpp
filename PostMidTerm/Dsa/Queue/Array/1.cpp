#include<iostream>
using namespace std;
#include<queue>

void enqueue(int data){
    if(rear==max-1){
        return;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=data;
    }
}
void dequeue(int data){
    if(front=-1|| front > rear){
        cout<<"queue underflow";
    }
    else{
        front++;

    }
}
void display(){
    if(front==-1){
        cout<<"queue is empty";
    }
    else{
        for(int i=front;i<=rear;i++){
            // check for i<rear;
            cout<<queue[i];
        }
    }
}