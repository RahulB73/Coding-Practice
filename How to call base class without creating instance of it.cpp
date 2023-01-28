// How to call base class without creating instance of it
// Can we call methods of virtual base class as we can't create its objects

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void fun1()=0;
    void fun(){
        cout<<"This is base class"<<endl;
    }
};

class Derived:public Base{
    public:
    void fun1(){
        cout<<"This is pure virtual function"<<endl;
    }
    void fun(){
        cout<<"This is Derived class"<<endl;
    }
};

int main(){
    // Base Obj; If class contain pure virtual function we cannot create its object
    // Obj.fun();
    Derived Obj;
    Obj.Base::fun(); //Class Resolution Operator
    return 0;
}

