#include <iostream>

using namespace std;

// Function to count the number of common factors of two integers a and b
int commonFactors(int a, int b) {
    int commonFactors = 0;

    // Find factors of the smaller of the two numbers
    int smaller = min(a, b);
    for (int i = 1; i <= smaller; ++i) {
        if (a % i == 0 && b % i == 0) {
            commonFactors++;
        }
    }

    return commonFactors;
}

int main() {
    int a = 12;
    int b = 18;

    int result = countCommonFactors(a, b);

    cout << "Number of common factors of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
