#include<iostream>
using namespace std;
void reverseNumber(int& num){
    int reverse=0;
    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    num=reverse;
}
int main(){
    int n;
    cin>>n;
    reverseNumber(n);
    cout<<n;

}