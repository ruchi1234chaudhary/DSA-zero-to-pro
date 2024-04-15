#include<iostream>
using namespace std;
class Fruits{
    public:
    string name;
    string color;
};
int main(){
    Fruits apple;//object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"-"<<apple.color<<endl;
   

    //Another way of object defining in main function
    Fruits *mango = new Fruits();
    mango->name = "mango";
    mango->color = "yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;
}