// Is Perfect number or not

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Given Number is Perfect Number";
    }
    else{
        cout<<"Given Number is not Perfect Number";
    }
    return 0;
}
