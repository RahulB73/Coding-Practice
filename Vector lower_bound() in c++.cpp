// Vector lower_bound() in c++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v;
    
    int N;
    cin>>N;
    
    int num;
    for(int i=0;i<N;i++){
        cin>>num;
        v.push_back(num);
    }
    
    sort(v.begin(),v.end());
    
    int Q;
    cin >> Q;
    int y;
    
    while(Q--){
        cin >> y;
        
        int r = lower_bound(v.begin(), v.end(), y) - v.begin();
        if(v[r] == y){cout<<"Yes "<<r+1<<endl;}
        else{cout<<"No "<<r+1<<endl;}
    }
}