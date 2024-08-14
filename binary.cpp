#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start =0;
    int end =n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return 1;
        }
            else if(key<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
    }
    return -1;
}
int main(){
     int n=6;
    int arr[6]={1,2,3,4,5,6};
    int key=1;
    int l=binarysearch(arr,n,key);
    if(l==-1){
        cout<<"not found";
    }
    else{
        cout<<"found";
    }
}