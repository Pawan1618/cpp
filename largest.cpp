#include<iostream>
using namespace std;
int main(){
    int n,n2,n3;
    cin>>n>>n2>>n3;
    if((n>n2)&&(n>n3)){
        cout<<n<<"is largest";
    }
    else if((n2>n3)&&(n2>n)){
        cout<<n2<<"is largest";
    }
    else{
        cout<<n3<<"is largest";
    }
}