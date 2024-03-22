//Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Note that you must do this in-place without making a copy of the array.

//input array;
//0 5 0 3 42

//output array
//5 3 42 0 0

#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &v){
    int n =v.size();
    for(int i=n-1; i>=0; i--){
       int j=0;
       while(j!=i){
        if(v[j]==0 && v[j+1]!=0){
            swap(v[j],v[j+1]);
            
        }
        j++;
       }
            
            
             }
          
                
            
            
        }


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    bubbleSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;


}