// Object Slicing ing c++

#include<iostream>
using namespace std;

class Base{
    public: 
     virtual void Fun(){
         cout<<"This is Base Class";
     };
};

class Derived: public Base{
    public: 
    void Fun(){
        cout<<"This is base class";
        cout<<"This is Derived Class";
    }
};

int main(){
    Base *ptr;
    Base Obj1;
    ptr->Obj1;
    Derived Obj2;
    Obj1=Obj2;
    Obj1.Fun();
}

