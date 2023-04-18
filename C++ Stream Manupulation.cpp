// C++ Stream Manupulation 

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    
    
    // double A = 100.345;
    // cout<<"0x"<<hex<<A;
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout<<hex<<showbase<<nouppercase<<left<<(long)A<<endl;
		cout<<setprecision(2)<<showpos<<setw(15)<<setfill('_')<<fixed<<right<<B<<endl;
		cout<<noshowpos<<uppercase<<scientific<<setprecision(9)<<C<<endl;

	}
	return 0;

}
