#include <iostream>
using namespace std;
int gcd(int a,int b) {
   int temp;
   while(b > 0) {
      temp = b;
      b = a % b;
      a = temp;
   }
   return a;
}

int main() {
   int n;
   cout<<"How much numbers GCD you want : ";
   cin>>n;
   cout<<endl;
   int a[n];
   cout<<"Enter the Numbers : ";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int r = a[0];
   for(int i=1; i<n; i++) {
      r = gcd(r, a[i]);
   }
   cout << r << endl;
   return 0;
}
