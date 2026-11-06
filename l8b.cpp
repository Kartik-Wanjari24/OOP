#include<iostream>
using namespace std;
class Book{
    public:
    int price;
    string title;
    string author;
    Book(){//default
        this->price=0;
        this->title="Unknown";
        this->author="Unknown";
    }
    Book(int price ,string title,string author){//para
        this->price=price;
        this->title=title;
        this->author=author;
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
    Book b2(2,"kartik","Karan");
    b2.display();

}