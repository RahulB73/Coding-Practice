// Not work if last two digits are 00 (Ex. 1500) [Corner Condition] 
#include<iostream>
 using namespace std;
 
 int main(){
     int n, rev=0,num;
     cout<<"Enter Positive Integer Number:"<<endl;
     cin>>n;
     
     while(n != 0){
         num=n%10;
         rev=(rev*10)+num;
         n=n/10;
     }
     cout<<"Reverse Number is"<<rev;
 }
