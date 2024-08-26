#include<iostream>
#include<string>
using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     string s1="new";
//     int l=s.length();
//     int flag=0;
//     // cout<<s;
//     for(int i=0;i<l;i++){
//         if(s1[i]==s[i++]){
//             if(s1[i++]==s[i++]){
//             flag++;}
//         }
//         break;
//     }
//     if(flag>0){
//         cout<<"string found";
//     }
//     else {
//         cout<<"string not found";
//     }
// }
int main(){
    int n;
    cout<<"enter the no of words in sentence";
    cin>>n;
    cin.ignore();
    string a[n];
    cout<<"enter the sentence : one word per line";
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    string key;
    cout<<"enter the word you wnat to find ";
    cin>>key;
    int flag =0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag=1){
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
    return 0;
}