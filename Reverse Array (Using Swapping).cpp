#include<iostream>
using namespace std;

int reverseArray(long A[], long N) {
    int i;
    int j;
    
    for(i=0, j=N-1; i < N/2; i++, j--){
          int temp = A[i];
          A[i] = A[j];
          A[j] = temp;
    }
    
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    
    long N,i,j;
    cin>>N;
    long A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    
    reverseArray(A, N);
}