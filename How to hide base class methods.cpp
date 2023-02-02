// How to hide base class methods

#include<iostream>
using namespace std;

class Base final{             // Make class uniheritable
    private:                  // Use private access modifier
    void Fun(){
        cout<<"This is base class";
    }
};

class Derived:public Base{
    public:
    void Fun(){
        cout<<"This is Derived Class";
    }
};

int main(){
    Derived Obj;
    Obj.Base::Fun();
    return 0;
}