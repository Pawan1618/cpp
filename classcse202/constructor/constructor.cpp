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
// constrctr is executed auto whenever obj is created 
//no return type of cons
// we can declare more than one  const 
// they differ in their parameter 
// if you dont provide const compiler will n generate default const
// except no  param and a empty body 
