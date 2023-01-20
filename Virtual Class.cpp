#include<iostream>
using namespace std;

class A                                  //  base class declaration.  
  {  
       int a;  
       public:  
       virtual void display()=0;
        
  };
  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  
  {  
        cout<<"This is derived Class B";  
  }  
}; 

class C : public A, public B{
    public:
    void display(){
      cout<<"This is derived Class C";   
    }
};

int main(){
    //A *ptr;
    C obj;
    //ptr=&obj;
    obj.display();
    
    return 0;
}