#include<bits/stdc++.h>
using namespace std;

int Result(int n){
    int Modified_Num=0;
    int i=0;
    while(n>0){
        int rem=n%10;
        Modified_Num=((9-rem)*pow(10,i++));
        n/10;
    }
    return Modified_Num;
}

int main(){
    int n;
    cin>>n;
    
    if(n < 0 || n > 10000){
        cout<<Result(n)<<endl;
    }
    else{
        cout<<"Wrong Number\n";
    }
    return 0;
}
