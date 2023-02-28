// Map In C++

#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    // Declaration of Map
    std::map<string,int> Map;    // Ascentding or Decending
    
    // Initializing Data in Map
    Map["Rahul"]=123;
    Map["Borkar"]=456;
    Map.insert(std::make_pair("Suresh",789));
    
    // Accessing in Map
    for(auto &el1: Map){
        cout<< el1.first <<" " <<el1.second<< endl;
    }
    
    // Accsess using [] operator
    cout<< Map["Suresh"] << endl;
    
}
