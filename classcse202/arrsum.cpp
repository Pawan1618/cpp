#include<iostream>
using namespace std;
class student{
  public:
 int a;
 void fun(int b){
    cout<<b<<endl;
 }
    

};
int main(){
    int student:: *ptr=&student::a;
    void(student::*ptr)(int)=&student::fun;
    student obj;
    obj.*ptr=10;
    cout<<obj.*ptr<<endl;
    (obj.*ptr)(20);
    return 0;

}