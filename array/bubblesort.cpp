#include<iostream>
using namespace std;
// int main(){
//     int n=5;
//     int k=3;
//     int arr[n]={1,5,3,2,5};
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j+1]>arr[j]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// using fxn
void  bubble_sort(int arr[], int n){   
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    n=5;
    int arr[n]={5,6,1,2,3};
    bubble_sort(arr,n);
    print(arr,n);
}