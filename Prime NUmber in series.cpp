#include <bits/stdc++.h>
using namespace std;
// Function to find if number is prime
int checkPrime(int num){
    if (num <= 1)
      { return 0; }
   // Check from 2 to half of arr[i]
   for (int j = 2; j <= num/2; j++){
      if (num % j == 0){
         return 0;
      }
      return 1;
   }
}
int main(){
   int n;
   cout<<"Enter total elements: ";
   cin>>n;
   int arr[n];
   int arr2[n];
   int count=0;
   int c=0,i;
   int isprime=0;
   cout<<"Enter the numbers :";
   for(i=0;i<n;i++){
      cin>>arr[i];
      isprime=checkPrime(arr[i]);
      if(isprime==1)
         arr2[c]=arr[i];
         c++;
         count++;
   }
   cout<<"Array is ";
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<"Prime Array is ";
   for(i=0;i<n;i++){
       cout<<arr2[i]<<" ";
   }
   cout<<"Count of number of primes in array : "<<count;
   return 0;
}
