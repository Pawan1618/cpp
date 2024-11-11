#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int res =n;
    int cnt=0;
    // while(n>0){
    //     int i=0;
    //     if(n%i==0){
    //         cnt++;
    //     }
    //     i++;
    //     n--;
    // }
    for(int i=n;i>0;i--){
        if(n%i==0){
            cnt++;
        }
    }
    try{
        if(cnt>2){
            cout<<"no error";
            // cout<<cnt<<n;
        }
        else{
            throw(cnt);
        }
    }
    catch(int cnt){
        cout<<"prime divison error";
        cout<<cnt;
    }
}