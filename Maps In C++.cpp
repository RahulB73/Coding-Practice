// Maps In C++

#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    // Declaration of Map
    std::map<string,vector<int>> Map;    // Ascentding or Decending
    
    // Initializing Data in Map
    Map["Rahul"].push_back(123);
    Map["Borkar"].push_back(456);
    Map["Rahul"].push_back(476);
    
    // Accessing in Map
    for(auto &el1: Map){
        cout<< el1.first<<endl;
        for(auto &el2: el1.second){
           cout << el2 << " ";
        }
        cout<<endl;
    }
    
     
    
}
