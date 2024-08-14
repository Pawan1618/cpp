#include<iostream>
using namespace std;
int main(){
    // int n;
    // n=5;
    // int arr[5]={1,2,3,5,6};
    // int new_element=200;
    // arr[5]=new_element;
    // n++;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    int n;
    n=5;
    int insert_position=2;
    int arr[5]={1,2,3,5,6};
    int new_element=20;

    for(int i=5;i>insert_position;i--){
        arr[i]=arr[i-1];
    }
    arr[insert_position]= new_element;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }



}