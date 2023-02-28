// Binary Search Algorithm

#include<iostream>
using namespace std;

int Binary_Search(int n,int Arr[],int key){
    int i,Loc=0;
    int mid,start=0,end=n-1;
    while(start<end){
    mid=(start+end)/2;
    
    if(Arr[mid]==key){
        Loc = mid;
        return Loc;
    }
    else
    if(Arr[mid]>key){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    return Loc=-1;
}

int main(){
    int n;
    cout<<"Enter the size of list : ";
    cin>>n;
    int Arr[n];
    cout<<"Enter the Elements of Array (list must be sorted) : ";
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    
    int key;
    cout<<"Enter the element to be found : ";
    cin>>key;
    int Loc=Binary_Search(n,Arr,key);
    if(Loc==-1){
        cout<<"Search is unsuccsesful";
    }
    else{
        cout<<"Search is succsesful";
        cout<<"Element found at location"<<Loc+1;
    }
}