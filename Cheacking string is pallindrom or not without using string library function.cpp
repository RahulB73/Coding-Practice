// Cheacking string is pallindrom or not without using string library function

#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str; 
    cin>>str;
     
    int i;
     
    for(i = str.length() - 1; i >= 0; i--)
    {
      	 if(str[i] != str[str.length() - i - 1]){
      	     cout<<"Not Pallindrom";
      	 }
    }
    
    cout<<"Pallindrom"; 
    return 0;
}