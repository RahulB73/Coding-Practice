// Linear Search Algorithm

#include<iostream>
using namespace std;

int Linear_Search(int item,int n,int Arr[]){
  for(int i=0;i<n;i++){
        if(Arr[i]==item){
            return i+1; 
        }
    }
    return -1;  
}

int main(){
    int n,item,i;
    cout<<"Enter the lenght of numbers : ";
    cin>>n;
    int Arr[n];
    for(i=0;i<n;i++){
        cin>>Arr[i];
    }
    cout<<"Enter the number to be found : ";
    cin>>item;
    int c=Linear_Search(item,n,Arr);
    if(c==-1){
        cout<<"Search is Unsuccsessful";
    }
    else{
        cout<<"Search is succsessful"<<endl;
        cout<<"Element found at location : "<<c;
    }
     
}
