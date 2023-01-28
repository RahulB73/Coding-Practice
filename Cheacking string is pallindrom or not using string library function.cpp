// Cheacking string is pallindrom or not using string library function

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string n;
    cin>>n;
    string m=n;
    reverse(n.begin(), n.end());
     
     
    
    if(m==n){
        cout<<"Pallindrom";
    }
    else{
        cout<<"Not Pallindrom";
    }
    return 0;
}
