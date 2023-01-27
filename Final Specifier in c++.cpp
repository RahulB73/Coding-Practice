// Final Keyword (Sealed Modifier)

#include<iostream>
using namespace std;

class Base final{
    public:
    virtual void Fun(){
        cout<<"This is base Class";
    }
};

class Derived: public Base{
    public:
    void Fun(){
        cout<<"This is Derived Class";
    }
};

int main(){
    Derived Obj;
    Obj.Fun();
    return 0;
}

