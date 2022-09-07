 #include<iostream>
 using namespace std;
 
 int main(){
     int Arr[20][20];
     int m,n,i,j,k;
     cout<<"Enter the number of rows:";
     cin>>m;
     cout<<"Enter the Number of coloums:";
     cin>>n;
     cout<<"Enter the elements of the matrix:"<<endl;
     for(i=0;i<m;i++){
         for(j=0;j<n;j++){
             cout<<"Enter the elements in the pocket"<<"["<<i<<"]"<<"["<<j<<"] :";
             cin>>Arr[i][j];
             cout<<endl;
         }
    }
    
    cout<<"Matrix is..."<<endl;
     for(i=0;i<m;i++){
         for(j=0;j<n;j++){
              cout<<Arr[i][j]<<" ";
         }
         cout<<endl;
    }
    
    for(i=0;i<m+n-1;i++){
       for(j=0;j<n;j++){
           for(k=0;k<n;k++){
               if(j+k==i){
                   cout<<Arr[k][j]<<" ";
               }
           }
       }
       cout<<endl;
    }
    return 0;
 }
