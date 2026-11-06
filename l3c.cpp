#include <bits/stdc++.h>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    double salary;
    
    void setData(int id,string name,double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main() {
    Employee e1,e2;
    e1.setData(1,"kartik",100000);
    e2.setData(2,"anis",200000);
    e1.display();
    e2.display();
    return 0;
}