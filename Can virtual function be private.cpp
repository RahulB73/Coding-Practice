#include<iostream>
using namespace std;

class A                                  //  base class declaration.  
  {  
       int a;  
       private:  
       virtual void display()  
       {   
             cout<< "Class A ";  
        }  
  };
  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    private:  
   void display()  
  {  
        cout<<"Class B";  
  }  
}; 

class C: public B{
    public:
    void display()  
  {  
        cout<<"Class C";  
  }  
};

int main(){
    A *ptr;
    C obj;
    ptr=&obj;
    obj.display();
    return 0;
}
