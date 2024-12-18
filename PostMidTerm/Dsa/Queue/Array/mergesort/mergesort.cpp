#include<iostream>
using namespace std;
void merge(int arr[],int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int leftarray[n1];
    int rightarray[n2];
    for(int i=0;i<n1;i++){
        leftarray[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        rightarray[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&& j<n2){
        if(leftarray[i]<rightarray[j]){
            arr[k++]=leftarray[i++];
        }
        else{
            arr[k++]=rightarray[j++];
        }
    }
    while(i<n1){
        arr[k++]=leftarray[i++];

    }
    while(j<n2){
        arr[k++]=rightarray[j++];
    }

}
void mergesort(int arr[],int l ,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"sorted elements";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}