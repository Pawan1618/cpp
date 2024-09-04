#include<iostream>
using namespace std;
int main(){
    int n;
    n=10;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // sum=sum+arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    

}