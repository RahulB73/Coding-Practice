// Merge Sort in c++

#include<iostream>
using namespace std;

void Merge(int, int, int, int);

void merge_Sort(int A[],int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        merge_Sort(A,l,mid);
        merge_Sort(A,mid+1,r);
        Merge(A,l,mid,r);
    }
}

Merge(int A[], int l, int mid, int r){
    int b[r];
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=r){
        if(A[i]<A[j]){
            b[k]=A[i];
            i++;
        }
        else{
            b[k]=A[j];
            j++;
        }
        k++;
    }
    
    if(i>mid){
        while(j<=r){
            b[k]=A[j];
            k++;
            j++;
        }
        else{
            while(i<=mid){
                b[k]=A[j];
                k++;
                j++;
            }
              
        }
    }
    for(k=0;k<=r;k++){
        A[k]=b[k];
    }
}



int main(){
    int n;
    cout<<"Enter the size of the list : ";
    cin>>n;
    int A[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    merge_Sort(A,0,n-1);
}

