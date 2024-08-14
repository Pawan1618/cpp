#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int third;
    for(int i=0;i<n;i++){
        third=first+second;
        first=second;
        second=third;
        cout<<third<<endl;
        
    }
    cout<<third;
    

}