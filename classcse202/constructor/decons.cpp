#include<iostream>
using namespace std;
// class counter{
//     private:
//     int id;
//     public:
//     counter(int i){
//         id=i;
//         cout<<"constructor of obje with id"<<id<<endl;
//     }
//     ~counter(){
//         cout<<"destructor wit id"<<id<<endl;
//     }

// };
// // destruction invokation order is reverse 
// int main(){
//     counter c1(1);

// }

class RX{
    private:
    int a;
    public:
    RX(int x){
        a=x;
        cout<<"h";
        // cout<<"e"<<endl;
    }
    void display(){
        cout<<"construr is called "<<a<<endl;
    }
    ~RX(){
        cout<<"deconstructor is called "<<a<<endl;
    }
};
int main(){
    RX obj1(10);
    RX obj2(20);
    RX obj3(1);

    // obj2.display();
    // obj3.display();
}
// destructor is called always 