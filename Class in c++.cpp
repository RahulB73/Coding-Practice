// Class in c++

#include <iostream> 
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int x;
    string st1;
    string st2;
    int y;
    public :
    int set_age(int age){
        x=age;
    }
    int set_standard(int standard){
        y=standard;
    }
    string set_first_name(string first_name){
        st1=first_name;
    }
    string set_last_name(string last_name){
        st2=last_name;
    }
    int get_age(){
        return x;
    }
    int get_standard(){
        return y;
    }
    string get_last_name(){
        return st2;
    }
    string get_first_name(){
        return st1;
    }
    string to_string(){
        stringstream sso;
        sso << x <<","<< st1 <<","<< st2 <<","<< y;
        return sso.str();
    } 
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

