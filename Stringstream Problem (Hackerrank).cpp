// Stringstream Problem (Hackerrank)

#include sstream
#include vector
#include iostream
using namespace std;

vectorint parseInts(string str) {
	 Complete this function
    vectorintv;
    int n;
    char ch;
    stringstream ss(str);
    while(ss){
        if(ss.peek()!=','){
            if(ssn)
            v.push_back(n);
        }
        else {
            ssch;
        }
    }
    return v;
}

int main() {
    string str;
    cin  str;
    vectorint integers = parseInts(str);
    for(int i = 0; i  integers.size(); i++) {
        cout  integers[i]  n;
    }
    
    return 0;
}