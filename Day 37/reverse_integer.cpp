#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN

int reverse(int x) {
    int reversed = 0;
    
    while (x != 0) {
        // Check for overflow before adding the next digit
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            return 0;
        }
        
        int digit = x % 10;
        x /= 10;
        reversed = reversed * 10 + digit;
    }
    
    return reversed;
}

int main() {
    int num = 12345;  // Replace this with the number you want to reverse
    int reversed = reverse(num);
    
    std::cout << "Reversed number: " << reversed << std::endl;
    
    return 0;
}
