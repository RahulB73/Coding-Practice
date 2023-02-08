// Implementation of Encapsulation

#include<iostream>
using namespace std;

class Base{
    int x;            // Data Member
    public:
    void setdata(int a){  // Member Function
        x=a;
    }
    void getdata(){
        cout<<"x = "<<x;
    }
};

int main(){
    Base obj;
    obj.setdata(10);
    obj.getdata();
    return 0;
}
