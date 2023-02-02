// Function Hiding in C++

#include<iostream>
using namespace std;

class Base{             // Make class uniheritable
    public:                  // Use private access modifier
    void Fun(int i){
        cout<<"This is base class";
    }
};

class Derived:public Base{
    
    public:
    using Base::Fun;
    void Fun(){
        cout<<"This is Derived Class";
    }
};

int main(){
    Derived Obj;
    Obj.Fun(1);
    //Obj.Base::Fun();  // Use class resolution operator
    return 0;
}