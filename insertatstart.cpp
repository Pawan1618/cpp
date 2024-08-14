#include<iostream>
using namespace std;
int main(){
    int n;
    n=5;
    int arr[5]={1,2,3,5,6};
    int newelement =200;
    for(int i=5;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=200;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}