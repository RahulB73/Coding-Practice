// Map Implementation in C++

#include<iostream>
#include<map>
using namespace std;

int main(){
    map <string , int>  Map; // Declaration
    
    string key;
    int value;
    
    for(int i = 0; i<=2 ; i++){
        cout<<"Key :";
        cin>>key;
        cout<<"value :";
        cin>> value;
        
        Map[key] = value; 
    }
    
    for (const auto& pair : Map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}
