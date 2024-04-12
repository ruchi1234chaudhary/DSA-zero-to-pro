#include<iostream>
using namespace std;
int main(){
    int arr[]={0,2,3,5,7,11,13,14,15,16};
    int n= sizeof(arr)/sizeof(arr[0]);
     int lo=0;
    int hi=n-1;
    int missing =-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{
        hi=mid-1;
        missing=mid;
        }
    }
    cout<<missing;
}