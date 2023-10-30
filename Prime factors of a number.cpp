// Prime factors of a number

#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) { // Use i * i <= num for efficiency
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void primeFactors(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= n; i += 2) { // Start from 3 and increment by 2 as most prime numbers are odd numbers
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
}

int main() {
    int n;
    cin >> n;

    primeFactors(n);

    return 0;
}
