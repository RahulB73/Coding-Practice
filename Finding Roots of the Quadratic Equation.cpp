// Finding Roots of the Quadratic Equation

#include<iostream>
#include<cmath>
using namespace std;

void findRoots(int a, int b, int c){
    if(a == 0){
        cout << "Invalid Equation" << endl;
        return; // Exit the function if 'a' is zero to avoid division by zero
    }
    
    int d = b*b - 4*a*c;
    
    if(d > 0){
        cout << "Quadratic Equation has real and two different roots" << endl;
        cout << (double)(-b + sqrt(d)) / (2 * a) << " " << (double)(-b - sqrt(d)) / (2 * a);
    }
    
    if(d == 0){
        cout << "Quadratic Equation has real and two same roots" << endl;
        cout << (double)(-b + sqrt(d)) / (2 * a);
    }
    
    if(d < 0){
        cout << "Quadratic Equation has complex and two different roots" << endl;
        // Note: I replaced the + and - operators with proper string concatenation
        cout << (double)(-b / (2 * a)) << "+i" << sqrt(abs(d)) << " " << (double)(-b / (2 * a)) << "-i" << sqrt(abs(d));
    }
}

int main(){
     cout << "Enter the coefficients of the Quadratic Equation : ";
     int a, b, c;
     cin >> a >> b >> c;
     
     findRoots(a, b, c);
}
