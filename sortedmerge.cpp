#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2){
    int mergearr[n1+n2];
    int i,j,k;
     i=0;j=0;k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            mergearr[k++]=arr1[i++];
        }
        else{
            mergearr[k++]=arr2[j++];
        }
    }
    while (i<n1){
        mergearr[k++]=arr1[i++];
    }
    while(j<n2){
        mergearr[k++]=arr2[j++];
    }
    for(int i=0;i<n1+n2;i++){
        cout<<mergearr[i]<<" ";
    }
    // this function is for two  sorted array merge
}
int main(){
    int n1,n2;
    n1=5;
    n2=5;
    int arr1[n1]={1,5,7,9,10};
    int arr2[n2]={6,7,9,10,15};
    merge(arr1,arr2,n1,n2);
}