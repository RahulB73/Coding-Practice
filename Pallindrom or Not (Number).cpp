// Pallindrom or not

#include<iostream>
using namespace std;

int main(){
    string n;
    string rev=0,rem;
    cout<<"Enter the number which Pallindrom you want: ";
    cin>>n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n){
        cout<<"Given number is pallindrom";
        
    }
    else{
        cout<<"Given Number is not pallindrom";
    }
}