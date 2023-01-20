//Structure Implementation
#include<iostream>
using namespace std;

struct Student
{
    string Name;  //Data Members
    int Roll_No;
    
};

int main(){
    struct Student S1;
    cout<<"Enter Name : ";
    cin>>S1.Name;
    cout<<"Enter Roll_No : ";
    cin>>S1.Roll_No;
    cout<<"Enter Name : "<<S1.Name<<endl;
    cout<<"Enter Roll_No : "<<S1.Roll_No;
}