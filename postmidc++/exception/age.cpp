#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    try{
        if(n<18){
            throw n; 
        }
        else{
            cout<<n;
            cout<<"\n Yes. you are old enough eligible for voting";
        }
    }
    catch(int n){
        cout<<"not eligible for voting"<<endl;
        cout<<"your age is less"<< n;
    }
}