#include<iostream>
using namespace std;

int squart(int x){
    int ans=0;
    int lo=0,hi=x;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(mid==x/mid){
            return mid;
        }
        else if(mid>x/mid){
            hi=mid-1;
        }
        else{
            lo=mid+1;
            ans=mid;
        }
         return ans;
    }
    

}
// int main(){
//     int x;
//     cout<<"Enter number:";
//     cin>>x;
//     squart(x);

// }