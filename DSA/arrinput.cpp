
#include<iostream>
using namespace std;
int main(){
    // using for loop
    char vowels[5];
//     for(int idx=0; idx<5; idx++){
//        cin>>vowels[idx];
//        }
//     for(int idx=0; idx<5; idx++){
//        cout<<vowels[idx];
// }
//using for each loop
for(char&element: vowels){
    cin>>element;

}
for(int idx=0; idx<5; idx++){
    cout<<vowels[idx]<<" ";
}

return 0;
}