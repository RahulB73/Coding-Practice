// C++ vector 

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}


