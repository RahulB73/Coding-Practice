 #include<iostream>
 using namespace std;
 
 int main(){
     long long int n;
     cin>>n;
     
     long long int p=1;
     long long int ans=0;
     
     while(n>0){
         int r = n%10;
         r= (r&1) ? r-1 : r+1; 
         ans = ans+r*p;
         p=p*10;
         n=n/10;
     }
     cout<<ans<<" ";
     return 0;
 }
