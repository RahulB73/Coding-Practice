#include<iostream>
using namespace std;

int main(){
    int n,min,price;
    cin>>n;
    
    int Stock[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    cout<<endl;
    
    min=0;
    price=0;
    
    for(int i=0;i<n;i++){
        price=price=Stock[i];
        if(min>price){
            min=price;
        }
    }
    cout<<min;
    
}
