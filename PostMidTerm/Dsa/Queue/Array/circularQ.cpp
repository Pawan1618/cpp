#include<iostream>
using namespace std;
#define max_size 4
int arr[max_size];
int rear=-1;
int front=-1;
void enqueue(int value){
    if((front==0 && rear==max_size-1)|| front==(rear+1)%max_size){
        //always use == in if cndn;
        cout<<"queue is full";
        return;
    }
    if(rear==-1){
        front=0;
        rear=0;
        arr[rear]=value;
        return;
    }
    rear=(rear+1)%max_size;
    arr[rear]=value;
}
void dequeue(){
    if(front==-1){
        cout<<"queue is empty";
        return;
    }
    if(rear==front){
        rear=-1;
        front=-1;
        return;
    }
    front=(front+1)%max_size;
    
}
void display(){
    if(front==-1){
        cout<<"queue is empty";
        return;
    }
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        for(int i=front;i<=max_size;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    display();

}