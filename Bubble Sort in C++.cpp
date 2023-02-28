// Bubble Sort in C++

#include<iostream>
using namespace std;

void bubbleSort(int n, int Arr[]){
    int i,j,temp;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1-i;j++){
            if(Arr[j]>Arr[j+1]){
              temp=Arr[j];
              Arr[j]=Arr[j+1];
              Arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of list : ";
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    
    bubbleSort(n,Arr);
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<" ";
    }
}


