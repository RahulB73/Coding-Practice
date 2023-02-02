// Sum of Subset of Array whose size is greater or equal to string

#include<iostream>
using namespace std;

int main(){
    int N;
    int min=0,i,j,sum=0,small;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
       cin>>A[i]; 
    }
    
    int T;
    int S=5;
    
    for(i=0;i<N;i++){
        if(A[i]<=S){
            min=1;
        }
        for(j=i+1;j<N;j++){
            sum=sum+A[i]+A[j];
            if(sum<=S){
                min=i+j;
                small=min;
                
                if(min<small){
                    small=min;
                    min=0;
                }
                 
            }
        }
    }
    if(min>=1){
        cout<<min;
    }
    else{
        cout<<-1;
    }
}