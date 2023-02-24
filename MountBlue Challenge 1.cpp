#include<iostream>
using namespace std;

int sockMerchant(int n, int ar[]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[i]){
                count++;
                break;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<sockMerchant(n,ar);
    return 0;
}
