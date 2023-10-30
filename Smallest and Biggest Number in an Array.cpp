// Smallest and Biggest Number in an Array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int small = arr[0];
    int big = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    
    cout<<"Smalledst : " <<small<<endl;
    cout<<"Biggest : "<<big;
    
    return 0;
}