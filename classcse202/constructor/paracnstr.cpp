#include<iostream>
using namespace std;
// class RX{
//     int a,b;
//     public:
//     RX(int x, int y){
//         a=x;
//         b=y;
//     }
//     int area(){
//         int c=a*b;
//         cout<<"Area is: "<<c<<endl;
//     }
// };
// int main(){
//     RX obj(5,6);
//     obj.area();

//     return 0;
// }
// when obj is created pass the arguments value;
// class rectangle{
//     private:
//     float he
// };
// constructor with default argumetns 
// class RX1{
//     private:
//     int a,b;
//     public:
//     RX1(int x=10,int y=20){
//         a=x;
//         b=y;
//     }
//     int sum(){
//         int c=a+b;
//         cout<<"Sum"<<c<<endl;
//     }
// };
// int main(){
//     RX1 obj(20,30); // pass value here as in obj

//     obj.sum();
//     RX1 obj2(8,3);
//     obj2.sum();// mistake dont pass value in sum member fxn
//     obj.sum();
//     /// can create multiple obj and use constr in different way
// }
// copy constr
// note constr def outside class ---> classname:: classname(){ }; 
// class RX2{
//     private:
//     int c;
//     public:
//     RX2 (int a){
//         c=a;
//     }
//     RX2(RX2 &obj)// remember to pass arguements as class name and & of obj
//     {
//         int c=obj.c;

//     }
//     void show(){
//         cout<<"C is"<<c<<endl;
//     }
// };
// int main(){
//     RX2 obj(2);
//     RX2 obj1(obj);
//     obj.show();
//     obj1.show();
//     return 0;
    
// }
class RX{
    int c,d;
    public:
    RX(int a,int b):c(a),d(b){

    }
    int sum(){
        int x=c+d;
        cout<<"value"<<x;
    }
};
int main(){
    RX obj(3,5);
    obj.sum();
    return 0;
}