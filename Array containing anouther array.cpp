// Array containing anouther array

#include<iostream>
using namespace std;

int main(){
    int n,ind=0;
    cin>>n;
    int *arr[n];
    
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[ind] = new int[k];
        for(int j=0;j<k;j++){
            cin>>arr[ind][j];
        }
        
    }
    
    
    
}