#include <iostream>
using namespace std;

// Function to calculate the power of a base number raised to an exponent using call by reference
void power(int& b, int& e) {
    int result = 1;
    
    // Calculate b^e
    for (int i = 0; i < e; ++i) {
        result *= b;
    }
    
    // Output the result
    cout << result << endl;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;  // Input base and exponent
    
    // Call the power function with base and exponent by reference
    power(base, exponent);
    
    return 0;
}
