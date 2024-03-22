#include<iostream>
using namespace std;
int main(){
  
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
      //traversing using for loop
    for(int idx=0; idx<size;idx++){
        cout<<array[idx]<<endl;
    }
    //traversing using for each loop
    for (int ele:array){
        cout<<ele<<endl;
    }
    //traversing using while loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }
    return 0;
}