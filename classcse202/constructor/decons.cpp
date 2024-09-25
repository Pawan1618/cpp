#include<iostream>
using namespace std;
class counter{
    private:
    int id;
    public:
    counter(int i){
        id=i;
        cout<<"constructor of obje with id"<<id<<endl;
    }
    ~counter(){
        cout<<"destructor wit id"<<id<<endl;
    }

};
// destruction invokation order is reverse 
int main(){
    counter c1(1);

}