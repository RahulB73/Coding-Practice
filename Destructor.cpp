#include<iostream>
using namespace std;

class Student
{
    string Name;
    int Roll_NO;
    
    public:
    
    Student(){
        cout<<"Object is Created"<<endl;
    }
    
    ~Student(){
        cout<<"Objct is Destoryed";
    }
    
    int Read(){
        cout<<"Name :";
        cin>>Name;
        cout<<endl;
        cout<<"Roll_NO";
        cin>>Roll_NO;
        cout<<endl;
    }
    
    int Print(){
        cout<<"Name :"<<Name<<endl;
        cout<<"Roll_NO : "<<Roll_NO;
    }
};

int main(){
    Student S1;
    S1.Read();
    S1.Print();
    return 0;
}
