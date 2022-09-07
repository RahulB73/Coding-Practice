#include<iostream>
using namespace std;

void Print(int Arr[], int n){
    cout<<"Sorted list is"<<endl;
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<" ";
    }
    
}
void BubbleSort(int Arr[], int n){
    int temp;
    for(int i=0;i<n-2;i++){
        if(Arr[i]>Arr[i+1]){
         temp=Arr[i=1];
         Arr[i+1]=Arr[i];
         Arr[i]=temp;
         
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the list:"<<endl;
    cin>>n;
    int Arr[n];
    cout<<"Enter the Elements of the list:     ";
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    cout<<endl;
    BubbleSort(Arr,n);
    Print(Arr,n);
    return 0; 
}
