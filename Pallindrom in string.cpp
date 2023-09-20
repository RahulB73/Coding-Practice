// Pallindrom in string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void isPallindrom(string str){
    string temp = str;
    reverse(str.begin(), str.end());
    if(temp == str){
        cout<<"String is pallindrom";
    }
    else{
        cout<<"string is not pallindrom";
    }
}

int main(){
    string name;
    cout<<"Enter the string : ";
    cin>>name;
    
    isPallindrom(name);
}