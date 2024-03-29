#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a binary decimal
bool is_binary_decimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

// Function to check if a number can be represented as a product of binary decimals
bool is_product_of_binary_decimals(int n) {
    // Check if n is a binary decimal
    if (is_binary_decimal(n))
        return true;
    
    // Check if n is divisible by 2 or 5, and if its remaining factor is a binary decimal
    while (n % 2 == 0)
        n /= 2;
    while (n % 5 == 0)
        n /= 5;
    
    // If n becomes 1 after removing all factors of 2 and 5, it can be represented as a product of binary decimals
    return n == 1;
}

int main() {
    int tc;
    cin >> tc; // Read the number of test cases
    
    // Process each test case
    while (tc--) {
        int n;
        cin >> n; // Read the number
        
        // Check if the number can be represented as a product of binary decimals and print the result
        if (is_product_of_binary_decimals(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
