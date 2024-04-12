#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int tar;
    cout<<"Enter Target";
    cin>>tar;
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==tar){
            lo=mid+1;
    
            
        }
        else {
           hi=mid;}
    
}
cout<<lo;}