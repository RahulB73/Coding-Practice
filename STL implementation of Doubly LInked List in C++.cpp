// STL implementation of Doubly LInked List in C++

#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> List;
    int val;
    
    while(val != -1){
        cin>>val;
         
        if(val != -1){
            List.push_back(val);
        }
        
         
    }
    
    List.push_front(3);
    
    for(auto i : List){
        cout<<i<<"->";
    }
    cout<<endl;
   
    
}





















