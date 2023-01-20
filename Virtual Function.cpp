#include<iostream>
using namespace std;

class A                                  //  base class declaration.  
  {  
       int a;  
       public:  
       virtual void display()  
       {   
             cout<< "Class A ";  
        }  
  };
  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  
  {  
        cout<<"Class B";  
  }  
}; 

class C : public A, public B{
    
};

int main(){
    A *ptr;
    B obj;
    ptr=&obj;
    obj.display();
    return 0;
}