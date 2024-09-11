#include<iostream>
using namespace std;
class student{
    int a,b;
    public:
    void rea(){
        cin>>a>>b;
    }
    void dis(){
        cout<<a<<b;
    }
};
int main(){
    student obj,*ptr;
    ptr=&obj;
    ptr->rea();
    ptr->dis();

}