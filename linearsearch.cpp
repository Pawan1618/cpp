#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6]={1,2,6,8,7,4};
    int key=10;
    int flag=0;
    for(int i=0;i<n;i++){
        flag=flag+1;
        if(arr[i]==key){
            cout<<"element found"<<" ";
            break;
        }
    }
    if(flag==6){
        cout<<"element not found";
    }
}