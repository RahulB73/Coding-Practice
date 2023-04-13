// Vector in c++ - 2


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
    
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    
    cout<<v.size()<<endl;
    
    for(auto &p : v){
        cout<<p<<" ";
    }
}
