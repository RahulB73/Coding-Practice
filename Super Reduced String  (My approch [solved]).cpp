// Super Reduced String  (My approch [solved])
// We can use stack data structure also. 


#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i] == s[i-1])
        {
            s.erase(i-1,2);
            i=0;
        }
    }
    if(s.length() == 0)
        cout<<"Empty String";
    else
        cout<<s;
    return 0;
}

