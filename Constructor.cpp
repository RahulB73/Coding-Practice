#include<iostream>
using namespace std;

class Student
   {
    int x; // Data Members
    int y;
    
    public :
    Student(int m, int n){   
      x=m;
      y=n;
    }
   Student(Student &S1);
    int ShowData(){
        cout<<x;
        cout<<y;
    }
   };
   
  Student::Student(Student &S1){
       Student S2=S1;
   }
    
    int main(){
        Student S1(30,130);
        S1.ShowData();
        Student S2(S1);
        S2.ShowData();
        return 0;
    }
    
