#include<iostream>
using namespace std;
int main(){
    int n=5;
    int k=3;
    int arr[n]={1,5,3,2,5};
    // for(int i=k;i<n-1;i++){
    //     arr[i]=arr[i+1];
    // }
    // no for loop required just decrease n;
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}