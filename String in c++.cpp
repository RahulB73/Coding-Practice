// String in c++

#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c=a+b;
    cout<<c<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
}


