#include <iostream>
using namespace std;

// Function to calculate the sum of divisors of each number from 1 to n
int divisorSum(int& n) {
    int totalSum = 0;
    
    // Loop through each number from 1 to n
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        // Find divisors of i
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum += j; // Add divisor to sum
            }
        }
        totalSum += sum; // Add the sum of divisors of i to totalSum
    }
    
    return totalSum; // Return the total sum of divisors
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n; // Input the number n
    
    // Call the function to calculate the divisor sum
    int result = divisorSum(n);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
