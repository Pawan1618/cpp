// // You are using GCC

// #include<iostream>
// #include<string>
#include<bits/stdc++.h>

using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setName(string data){
        name=data;
    }
    void setAge(int n){
        age=n;
    }
    void display(string name, int n){
        cout<<"Name of current object: "<<name<<endl;
        cout<<"Age of current object: "<<n<<endl;
    }
    Person(){
        cout<<"Default constructor is called"<<endl;
    }
};
int main(){
    Person obj;
    string name;
    int n;
    cin>>name;
    cin>>n;
    obj.setName(name);
    obj.setAge(n);
    obj.display(name,n);
    return 0;
}