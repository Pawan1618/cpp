#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,5,3,2,5};
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}