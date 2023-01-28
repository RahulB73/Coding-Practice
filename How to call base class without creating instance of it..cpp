// How to call base class without creating instance of it


#include<iostream>
using namespace std;

class Base{
    public:
    // virtual void fun1()=0;
    void fun(){
        cout<<"This is base class"<<endl;
    }
};

class Derived:public Base{
    public:
     
    void fun(){
        cout<<"This is Derived class"<<endl;
    }
};

int main(){
    Derived Obj1;
    Obj1.Base::fun(); //Approch 1
    
    Base Obj=static_cast<Base>(Obj1); //Approch 2 (Upcasting and Downcasting of Objects)
    Obj.fun();
    
    Derived *ptr=static_cast<Derived*>(&Obj);
    ptr->fun();
    return 0;
}

