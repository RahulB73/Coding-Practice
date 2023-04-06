// Virtual Function (Hackerrank)

#include <iostream>
#include <string>
using namespace std;


class Person{
    protected:
    string name;
    int age;
    
    public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};

class Professor: public Person{
    int publications;
    int cur_id;
    
    static int total_id;
    
    public:
    Professor(){
        total_id++;
        cur_id = total_id;
    }
    virtual void getdata(){
        cin >> name >> age >> publications;
    }
    virtual void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << "\n";
    }
    
};

class Student: public Person{
    int marks[6];
    int cur_id;
    
    static int total_id;
    
    public:
    Student(){
        total_id++;
        cur_id = total_id;
    }
    virtual void getdata(){
        cin >> name >> age;
        for(int i=0; i<6; i++)cin >> marks[i];
    }
    virtual void putdata(){
        int mark_total=0;
        for(int i=0; i<6; i++)mark_total += marks[i];
        cout << name << " " << age << " " << mark_total << " " << cur_id << "\n";
    }
    
};

int Professor::total_id=0;
int Student::total_id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}