#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int temp = n;  // Store n in a temporary variable to process
    int sum = 0;   // Variable to accumulate the sum of factorials

    // Loop to separate digits
    while (temp > 0) {
        
        // 1. Get the last digit
        int digit = temp % 10; 

        // 2. Calculate factorial of the extracted digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        // 3. Add the factorial to the total sum
        sum = sum + fact;

        // 4. Remove the last digit
        temp = temp / 10;
    }

    // Check condition
    if (sum == n) {
        cout << n << " satisfies the property (Factorion)." << endl;
    } else {
        cout << n << " does NOT satisfy the property." << endl;
    }

    return 0;
}
