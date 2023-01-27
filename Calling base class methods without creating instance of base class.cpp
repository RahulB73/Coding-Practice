// Calling base class methods without creating instance of base class

#include<iostream>
using namespace std;

class Base{
    public: 
    void Fun(){
        cout<<"This is base class"<<endl;
    }
};

class Derived:public Base{
    public: 
    void Fun(){
        Base::Fun();
        // cout<<"This is Derived class"<<endl;
    }
};

int main(){
    Derived Obj;
    Obj.Fun();
}

