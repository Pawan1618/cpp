#include<iostream>
using namespace std;
class sample{
    int a,b;
    public:
    void setvalue(){a=10;b=40;}
    friend float mean(sample s);
};
float mean(sample s)
