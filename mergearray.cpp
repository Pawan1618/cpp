#include<iostream>
using namespace std;
void mergearr(int arr1[],int arr2[], int n1, int n2){
    int mergearr[n1+n2];
    for (int i=0;i<n1;i++){
        mergearr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        mergearr[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        cout<<mergearr[i]<<" ";
    }
}
// // if two array are not sorted before first merge them and then sort them;
// void bubblesort(int mergearr[]){
//     for(int i=0;i<n1;i++){
//         for(int j=0;j=j)
//     }
// }
int main(){
    int n1,n2;
    n1=5;
    n2=5;
    int arr1[n1]={1,7,9,10,5};
    int arr2[n2]={6,7,9,10,15};
    mergearr(arr1,arr2,n1,n2);
}