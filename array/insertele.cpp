#include<iostream>
using namespace std;
int main(){
    int a[100],i,n,k,item;
    cout<<"how many no to store in "<<endl;
    cin>>n;
    cout<<"enter the element";
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    cout<<"enter the no and its pos"<<endl;
    cin>>item>>k;
    k=k-1;
    for(i=n;i>=k;i--){
        a[i+1]=a[i]
    }
}