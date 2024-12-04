#include <iostream>
using namespace std;

int main() {
    int x = 10;  // Limit of the range
    int n = 3;   // Number to check divisibility
    int sum = 0; // Variable to store the sum

    // Loop through numbers from 1 to x
    for (int i = 1; i <= x; i++) {
        // Check if the number is divisible by n
        if (i % n == 0) { // Use modulo operator to check divisibility
            sum += i;    // Add the number to the sum
        }
    }

    cout << "Sum = " << sum << endl; // Output the result
    return 0;
}
