#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age;
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class student:public human{
    public:
    int marks;
};
int  main(){
    student s1;
    cout<<"Enter the name of student "<<endl;
    cin>>s1.name;
    cout<<"ENter the age of student"<<endl;
    cin>>s1.age;
    cout<<"Enter the marks of student"<<endl;
    cin>>s1.marks;

    s1.display();
    cout<<s1.marks<<endl;
}