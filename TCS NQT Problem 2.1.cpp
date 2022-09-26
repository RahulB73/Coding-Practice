#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int n1,n2;
    cin>>n1>>n2;
    
    int count=0;
    
    for(int i=n1;i<=n2;i++){
        set<char>s;
        string s1 = to_string(i);
        int size = s1.lenght();
        for(char x: s1){
            s.insert(x);
        }
        if(s.size()==size){
            cout++;
        }
    }
}

int main(){
    cout<<Solve()<<endl;
    return 0;
}