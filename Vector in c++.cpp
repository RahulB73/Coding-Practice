// Vector in c++


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int N;
    cin>>N;
    vector <int> v;
    int num;
    
    for(int i=0;i<N;i++){
        cin>>num;
        v.push_back(num);
    }
    
    sort(v.begin(),v.end());
    
    for(auto &p : v){
        cout<<p<<" ";
    }
}
