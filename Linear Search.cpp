 #include<iostream>
 using namespace std;
 
 
 int LinearSearch(int Arr[],int n,int ele){
    int loc;
    for(int i=0;i<n;i++){
         if(Arr[i]==ele){
           loc+=i;  
         }
         else{
             return loc=NULL;
         }
     }
     
     if(loc!=NULL){
         cout<<"Element found at location"<<loc<<endl;
     }
     else{
         cout<<"Element doesn't exist in the given list";
     } 
 }
 int main(){
     int n,i;
     cout<<"Enter the size of array:"<<endl;
     cin>>n;
     int Arr[n];
     cout<<"Enter the  element of the array:"<<endl;
     for(i=0;i<n;i++){
         cin>>Arr[i];
     }
     cout<<"Enter the  element to be searched:"<<endl;
     int ele;
     cin>>ele;
     LinearSearch(Arr,n,ele);
     return 0;
 }
