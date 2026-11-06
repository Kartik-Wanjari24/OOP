#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
    int real;
    double img;
    Complex(){
        
    }
    Complex(int real,double img){
        this->real=real;
        this->img=img;
    }
    void input(){
        cout<<"Enter real value : "<<endl;
        cin>>real;
        cout<<"Enter img value : "<<endl;
        cin>>img;
    }
    void add(Complex c){
        cout<<this->real+c.real<<"+"<<this->img+c.img<<"i"<<endl;
    }
};

int main() {
Complex c1;
c1.input();
Complex c2(1,3.14);

c2.add(c1);
    

    return 0;
}