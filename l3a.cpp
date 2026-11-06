#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;
};
int main(){
    Student s1;
    s1.id=18;
    s1.name="virat";
    cout<<"id "<<s1.id<<endl;
    cout<<"name "<<s1.name<<endl;
}