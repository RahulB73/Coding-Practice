// Avoiding Object slicing using pointer and reference
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
    
    Base Obj1;
    Derived Obj2;
    Base *ptr=new Obj1;
    Derived *ptr2=new Obj2;
    Obj2.Fun();
    Obj1=Obj2;
    Obj1.Fun();
}

