// Exception Handling in c++

#include<iostream>
#include<exception>
using namespace std;

int main(){
    int a=10;
    int b=0;
    try{
        if(b == 0){
            throw "Devide by zero exception";
        }
    int c = a/b;
    cout<<c;
    } catch(const char *e){
        cout<<"Exception Case 101 : "<<e;
    }
    return 0;
}