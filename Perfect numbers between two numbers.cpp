// Perfect numbers between two numbers

#include<iostream>
using namespace std;

int main(){
    int n,sum=0,min,max;
    cout<<"Enter the numbers: ";
    cin>>min>>max;
    cout<<"Perfect nembers between"<<min<<"and"<<max<<"are : ";
    for(n=min;n<=max;n++){
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n;
    }
     
    }
    return 0;
}

