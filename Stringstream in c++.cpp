// Stringstream in c++

#include<iostream>
#include<string>
#include<typeinfo>
#include<sstream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    string str;
    cin>>num; 
    // to_string(num);
    cout<<typeid(num).name();
    // cout<<type(num);
    stringstream obj;
    obj<<num;
    str=obj.str();
    cout<<str;
    cout<<typeid(num).name();
    // cout<<type(num);
}
