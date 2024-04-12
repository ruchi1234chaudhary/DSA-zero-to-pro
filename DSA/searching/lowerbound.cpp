//Given a sorted integer array and an integer 'x'. Find the lower bound of x.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,6,7,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int tar;
    cout<<"Enter Target:";
    cin>>tar;
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid=(lo+hi)/2;
        if(arr[mid]>=tar){
            hi=mid;

        }
        else{
            lo=mid+1;
        }
    }
   cout<<lo;
}