#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=1;
    int hi=n-2;
   
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid-1]<arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>arr[mid]<arr[mid+1]){
            hi=mid-1;
        }
        else{
          lo=mid-1;
         
        }
         return -245678; 
    }
   
 
    
}