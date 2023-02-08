// Nested Class in c++

#include<iostream>
using namespace std;

class Parent{
    public:
    int x;
    public:
    Parent(){
        x=20;
        
    }
    void Print(){
        cout<<"y= "<<y<<endl;
    }
    public:
    class Child{
        int y;
        public:
        Child(){
            // ptr->x;
            y=20;
        }
        Print(y);
    };
};

int main(){
    Parent:: Child obj;
    // obj.Print();
    // Child obj2;
    obj.Print();
    return 0;
}