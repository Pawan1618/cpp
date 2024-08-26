// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="moma";
//     int l=s.length();
//     cout<<l;
//     int count=0;
//     for(int i=0;i<(l)/2;i++){
//         if(s[i]==s[l-i]){
//             count++;
//             // cout<<"palindrome";
//         }
//         else{
//             count=0;
//         }
//     }
//     if(count>0){
//         cout<<"palindrom";
//     }
//     else{
//         cout<<"not palindrome";
//     }
// }

// teacher method
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cin>> s;
int flag=0;
int n=s.length();
for(int i=0;i<n;i++) //can go for n/2
{ 
    if(s[i]!=s[n-i-1]){
        flag=1;
        break;
    }
}
if(flag==1){
    cout<<"not palindrom";
}
else{
    cout<<"palindrom";
}
}

