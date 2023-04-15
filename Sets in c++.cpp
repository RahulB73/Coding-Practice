// Sets in c++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set <int> s;
    int Q;
    cin>>Q;
    int x,y;
    
    while(Q--){
    cin>>x>>y;
    if(x==1){
        s.insert(y);
    }
    
    else if(x==2){
        s.erase(y);
        }
    
    
    else{
        set<int>::iterator itr=s.find(y);
        if(s.end()==itr){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
}
}
