#include<iostream>
using namespace std;
class vehicle{
    public:
    float distance,time;
    void input(){
        cin>>distance>>time;
    }
};
class car:public vehicle{
    public:
    float speed;
    void logic(){
        speed=distance/time;
    }
    void show(){
        cout<<speed<<"km/hr";
    }

};
int main(){
    car obj;
    obj.input();
    obj.logic();
    obj.show();
    return 10;
}