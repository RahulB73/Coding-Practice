// Exception Handling in c++ - 2

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    try{
        for(int i=0;i<str.length();i++){
            if(str[i]=='z'){
                throw "Z is not allowed";
            }
            else{
                cout<<str[i];
            }
        }
    }catch(const char *e){
        cout<<"Exception 101 : "<<e;
    }
}