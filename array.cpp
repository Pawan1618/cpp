#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //we get zero in case of uninitialized array;
    int n1=6;
    int arr1[n1]={1,2,3,4};
    for(int j=0;j<n1;j++){
        cout<<arr1[j];
    }
}