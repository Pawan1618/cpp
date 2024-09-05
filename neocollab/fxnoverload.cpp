#include<iostream>
#include<iomanip>
using namespace std;
double calculateSpeed(double distance, double time){
    double speed=distance/time;
    return speed;
}
double calculateSpeed(double distance, double time , double acceleration){
    double speed=(distance/time)+(acceleration*time);
    return speed;
}
int main(){
   double  distance,t,acct,accp;
   cin>>distance>>t>>acct>>accp;
//   cout<<distance<<t<<acct<<accp;
  double speed=calculateSpeed(distance,t);
  cout<<fixed<<setprecision(2); // remember this is crucial fixed, setprecision;
  cout<<speed<<endl;
  cout<<calculateSpeed(distance,t,acct)<<endl;
  cout<<calculateSpeed(distance,t,accp);
}