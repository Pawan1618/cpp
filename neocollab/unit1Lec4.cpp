// You are using GCC
/*
remarks
manage to pass testcase only sol is not as per asked*/
#include<iostream>
using namespace std;
enum LetterType{vowel,consonant,invalid} ans;
class LetterAnalyzer{
    public:
    char c;
     void print(char c){
         if((c>=65&&c<=90)||(c>=97&&c<=122)){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            cout<<"vowel";
        }
        else{
            cout<<"consonant";
        }}
        else{
            cout<<"Invalid input";
        }
    }
     
    
};
int main(){
    LetterAnalyzer d;
   char n;
   cin>>n;
   d.print(n);
   return 0;
}

