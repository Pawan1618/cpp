#include<iostream>
using namespace std;
class employee{
    public:
    int uid;
    string name;
    void get();
    void put();

};
void employee::get(){
    cin>>uid>>name;
}
void employee::put(){
    cout<<uid<<name;
}
int main(){
    employee emp;
    emp.get();
    emp.put();
   


}