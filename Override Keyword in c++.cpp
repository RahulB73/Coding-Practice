// Override Keyword in c++

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void fun(){
        cout<<"This base class";
    }
};

class Derived: public Base {
    public:
    void Fun(int a) override{
        cout<<"This Derived class";
    }
};

int main(){
    Base *ptr=new Derived();
    ptr->fun();
    return 0;
}