#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    // s.push(3);
    // s.push(4);
    // s.push(7);
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop(); // always go to next by poping
    // }
    int n;
    cin>>n;
    while(!n){
        int element;
        cin>>element;
        s.push(element);
        n++;
    }
    // for(int i=0;i<n;i++){
    //     int element;
    //     cin>>element;
    //     s.push(element);
    // }
    // while(n>0){
    //       int element;
    //     cin>>element;
    //     s.push(element); // j
    //     n--;   /* note terminate loop  decrease cnd */

    // }
    // do {
    //         int element;
    //     cin>>element;
    //     s.push(element);
    //     n--;

    // }
    // while(n>0);
     while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop(); // always go to next by poping
    }
    
    return 0;
}