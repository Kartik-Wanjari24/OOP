#include<iostream>
using namespace std;
class Circle{
    public:
    double radius;
    Circle(double radius){
        this->radius=radius;
    }
    void area(){
        cout<<radius*radius*3.14<<endl;
    }
};
int main(){
    Circle c(5);
    c.area();
}