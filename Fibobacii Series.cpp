#include<iostream>
using namespace std;

int fibonacii(int n){
    int First_No=0,Second_NO=1,Third_NO;
    cout<<"Fibonacii Series of"<<n<<"Numbers is"<<endl;
    cout<<Second_NO<<" ";
    for(int i=0;i<=n;i++){
         
           Third_NO=First_No+Second_NO;
           cout<<Third_NO<<" ";
           First_No=Second_NO;
           Second_NO=Third_NO;
        
         
    }
}

int main(){
    int n;
    cout<<"Enter the Number upto which you want fibonacii Series:"<<endl;
    cin>>n;
    if(n>1){
      fibonacii(n);
    }
    else{
            cout<<"Fuck You";
        }
    return 0;
}
