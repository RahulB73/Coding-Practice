// C++ Vector STL

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;                       // Declaration
    v.push_back(3);
    v.push_back(2);                     // Storing elements at the end of the array
    v.push_back(1);
    
    for(int i=0;i<v.size();i++){        // Printing way 1
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    vector<int>::iterator it;             // Printing way 2
    for(it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
     cout<<endl;
    
    for(auto element:v){                 // Printing way 3
        cout<<element<<" ";
    }
    cout<<endl;
    
    v.pop_back();                     // Remove End Element
    
    vector<int> v2(3,10);             // Declare vector with fixed size and fixed elements
    
    swap(v,v2);
    
    for(auto element:v){                  
        cout<<element<<" ";
    }
    cout<<endl;
    
    for(auto element:v2){                 
        cout<<element<<" ";
    }
    cout<<endl;
    v.push_back(4);
    
    sort(v.begin(),v.end());
    
    for(auto element:v2){                 
        cout<<element<<" ";
    }
}