#include<iostream>
using namespace std;
inline int max(int x,int y){
    return(x>y)?x:y;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"max (x,y): "<<max(x,y);
}