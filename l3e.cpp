#include<iostream>
using namespace std;
class Complex{
    public:
    double real;
    double img;
    
    void getData(){
        cout<<"Enter real part ";
        cin>>real;
        cout<<"Enter img part ";
        cin>>img;
    }
    void add(Complex b){
        cout<<this->real+b.real<<"+"
        <<this->img+b.img<<"i"<<endl;
    }
    
};
int main(){
    Complex c1;
    Complex c2;
    c1.getData();
    c2.getData();
    c1.add(c2);


}