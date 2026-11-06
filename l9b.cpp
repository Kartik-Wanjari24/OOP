#include <bits/stdc++.h>
using namespace std;
class Employee{
    public:
    int id;
    double salary;
    Employee(){

    }
    Employee(int id,double salary){
        this->id=id;
        this->salary=salary;
    }
    Employee(Employee &x){
        this->id=x.id;
        this->salary=x.salary;
    }
    void display();

};
void Employee::display(){
    cout<<id<<" "<<salary<<endl;
}

int main() {
    Employee e1(1,10);
    Employee e2(e1);
   e1.display();
   e2.display();
    return 0;
}