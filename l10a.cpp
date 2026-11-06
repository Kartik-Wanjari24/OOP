#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    int age;
    double salary;
    string name;
    Employee(){
        id=-1;
        age=-1;
        salary=0;
        name="";
    }
    Employee(int id,int age,double salary,string name){
    this->id=id;
    this->age=age;
    this->salary=salary;
    this->name=name;
    }
    void display();
    void change(int x);
        
    
};
void Employee ::display(){
    cout<<id<<" "<<age<<" "<<name<<" "<<salary<<endl;
}
void Employee::change(int x){
    this->salary=x;
}

int main(){
    Employee e1;
    Employee e2(1,20,200000,"kartik");
    e1.display();
    e2.display();
    e1.change(100000);
    e1.display();
}