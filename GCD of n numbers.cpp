// GCD of n numbers

 #include <iostream>

// Function to calculate the GCD of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Please enter a positive integer count." << std::endl;
        return 1;
    }

    int numbers[n];

    // Input the numbers
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Find the GCD of the numbers manually
    int gcd = numbers[0];
    for (int i = 1; i < n; ++i) {
        gcd = findGCD(gcd, numbers[i]);
    }

    std::cout << "GCD of the numbers is: " << gcd << std::endl;

    return 0;
}
