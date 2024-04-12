#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> input, int target){
    //define search space
    int lo = 0;//start of the search space
    int hi = input.size() - 1;//end of the search space
    while(lo <= hi){
        //cal midpoint for the search space
        int mid = (lo+ hi)/2;
        if(input[mid]== target) return mid;
        else if(input[mid]<target){
            //dicard the left of mid
            lo = mid+1;
        }
        else{
            //discrad the right of the mid
            hi = mid-1;
        }
    }
    return -1;

}
//using recursion to solve this question
int binarySearchRecursive(vector<int> &input, int target, int lo, int hi){
    int mid = (lo+hi)/2;
    if(input[mid]== target) return mid;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
   cin>>target;
   cout<<binarySearch(input, target)<<"\n";
   return 0;

}