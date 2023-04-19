// Single Level Inheritance

#include <iostream>
using namespace std;

class Rectangle{
    public : 
    int height;
    int width;
    
    public : 
    
    void display(){
        cout<<height<<" "<<width<<endl;
    }
};

class RectangleArea : public Rectangle {
    public :
   
    void read_input(){
        cin>>height>>width;
    }
    
    void display(){
       cout<<height*width; 
    }
};


int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}
