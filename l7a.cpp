#include<iostream>
using namespace std;
class Dist{
    public:
    double feet;
    int inch;
    void getData(){
        cout<<"Enter feet"<<endl;
        cin>>feet;
        cout<<"Enter inch"<<endl;
        cin>>inch;
    }
    void add(Dist);

};
void Dist::add(Dist b){
    double f=this->feet+b.feet;
    int i=this->inch+b.inch;
    if(i>=12){
        f+=i/12;
        i=i%12;
    }
    cout<<"Dist is "<<f<<'.'<<i<<endl;
}
int main(){
    Dist d1;
    Dist d2;
    d1.getData();
    d2.getData();
    d1.add(d2);
}