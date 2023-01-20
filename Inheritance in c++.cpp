#include<iostream>
using namespace std;

class A{
    public:
    int x;
    
    int getData(int a){
        x=a;
        return x;
    }
};

class B:public A{
    public:
    int displayData(){
        cout<<x;
    }
};

int main(){
    A Obj;
    Obj.getData(5);
    Obj.displayData();
    return 0;
}

