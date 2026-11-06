#include <bits/stdc++.h>
using namespace std;
class Temp{
    public:
    Temp(){
        cout<<"Default constructor is called"<<endl;
    }
    ~Temp(){
        cout<<"Distructir is called"<<endl;
    }
};
int main() {
    Temp t1;
    cout<<"Inside main"<<endl;
    return 0;
}