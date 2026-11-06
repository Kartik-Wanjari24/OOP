#include<bits/stdc++.h>
using namespace std;
class GeometryCalculator{
    public:
    void areaOfTriangle(double base ,double height){
        cout<<0.5*base*height<<endl;
    }

    void peremeterOfTriangle(double sideA ,double sideB,double sideC){
        cout<<sideA+sideB+sideC<<endl;
    }
    void areaOfCircle(double radius){
        cout<<3.24*radius*radius<<endl;
    }
    void circumferanceOfCircle(double radius){
        cout<<2*3.14*radius<<endl;
    }
    void areaOfRectangle(double width,double length){
        cout<<length*width<<endl;
    }


};
int main(){
    double length=11.0;
    double height=23.0;
    double base=5.0;
    double width=3.4;
    double radius=34.7;
    double sideA=1.5;
    double sideB=2.5;
    double sideC=3.5;

    GeometryCalculator g1;
    
    g1.areaOfTriangle(base,height);
    g1.peremeterOfTriangle(sideA,sideB,sideC);
    g1.areaOfCircle(radius);
    g1.circumferanceOfCircle(radius);
    g1.areaOfRectangle(width,length);


}