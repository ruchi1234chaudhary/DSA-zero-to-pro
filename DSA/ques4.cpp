#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++ ){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<"\n";//0(n^2)
    }
return 0;
}