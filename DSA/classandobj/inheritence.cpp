#include<iostream>
using namespace std;
class Parent{
public:
int x;
protected:
int y;
private:
int z;};
class child1: public Parent{
    //x will remain public
    //y will remain protected
    //zwill not be accessible

};
class child2 : private Parent{
    //xwill be private
    //y will be private
    //z will be inaccessible
};
class child3: protected Parent{
    //x will be protected
    //y will be protected
    //z will be inaccessible
};


int main(){
    Parent p;
    p.x;

}