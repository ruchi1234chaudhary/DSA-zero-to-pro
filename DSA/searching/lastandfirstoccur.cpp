#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,4,5,6,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter target:";
    cin>>target;
    int lo =0;
    int hi=n-1;
   int FO = -1;
   int LO = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid>0 && arr[mid]==arr[mid-1]){
                hi=mid-1;
            }
            else{
                FO=mid;
              break;
            }
        }
        else if(arr[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid>0 && arr[mid]==arr[mid+1]){
                lo=mid+1;
            }
            else{
                LO=mid;
              break;
            }
        }
        else if(arr[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<FO;
    cout<<LO;
}