#include<iostream>
using namespace std;
class student{
    public:
    int a,b;
    void get(){
        cin>>a>>b;
    }
    void put(){
        cout<<this->a<<endl;
        cout<<this->b<<endl;
        cout<<"address of object is"<<this<<endl;
    }
};
int main(){
    student   
}