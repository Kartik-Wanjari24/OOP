#include<iostream>
using namespace std;
class Book{
    public:
    int price;
    string title;
    string author;
    Book(){
        this->price=0;
        this->title="Unknown";
        this->author="Unknown";
    }
    void display(){
        cout<<"Price: "<<price<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
    }
};
int main(){
    Book b1;
    b1.display();
}