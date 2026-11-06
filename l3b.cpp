#include<iostream>
using namespace std;
class Box{
    public:
    double height;
    double width;
    double length;
};
int main(){
    Box b1;
    Box b2;
    b1.length=20.5;
    b1.height=25.4;
    b1.width=3.77;
    b2.length=2.5;
    b2.height=2.4;
    b2.width=3.77;

    cout<<"Volume "<<b1.length*b1.height*b1.width<<endl;
    cout<<"Volume "<<b2.length*b2.height*b2.width<<endl;

}