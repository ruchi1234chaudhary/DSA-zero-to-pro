#include<iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int> &v){
    
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
