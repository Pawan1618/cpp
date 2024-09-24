#include<iostream>
using namespace std;
class RX{
    int a,b;
    public:
    RX(){
        a=10;
        b=20;
    }
    int area(){
        int c=a*b;
        cout<<"Area is: "<<c<<endl;
    }
};
int main(){
    RX obj;
    obj.area();

    return 0;
}