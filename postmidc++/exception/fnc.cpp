#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=pow(a+b,2);
    try{
        if(res%2==0){
            cout<<"no error";
        }
        else{
            throw(res);
        }
    }
    catch(int res){
        cout<<"error by odd";
    }
}