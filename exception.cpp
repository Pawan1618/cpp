#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0){ //error;
            throw b;
        }
        else{
            cout<<a/b;
        }

    }
    catch(int b){
        cout<<"zero divison error";
        
    }
  
}