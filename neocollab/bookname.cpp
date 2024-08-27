#include<iostream>
#include<string>
using namespace std;
/*
important note 
the cin.ignore( ) // ignore the newline 
if you dont write this will not take  input of string below */
int main(){
    int n;
    cin>>n;
    string arr[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    int n2;
    cin>>n2;
    string arr2[n2];
    cin.ignore();
    for(int i=0;i<n2;i++){
        getline(cin,arr2[i]);
    }
}