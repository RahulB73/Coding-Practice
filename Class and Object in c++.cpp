// Topic - Class [Hackerrank - Box it! Problem]

#include<iostream>
using namespace std;

class Box{
    int l;
    int b;
    int h;
    
    public :
    Box(){
        l=0;
        b=0;
        h=0;
    }
    
    Box(int lenght, int breadth, int height){
        l=lenght;
        b=breadth;
        h=height;
    }
    
    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }
    
    int getLenght(){
        return l;
    }
    
    int getBreadth(){
        return b;
    }
    
    int getHeight(){
        return h;
    }
    
    long long CalculateVolume(){
        int Volume = l*b*h;
        return Volume;
    }
};

int main(){
    Box Obj;
    Box B(2,3,4);
    Box Obj2(B);
    Obj2.getLenght();
    Obj2.getBreadth();
    Obj2.getHeight();
    Obj2.CalculateVolume();
}
