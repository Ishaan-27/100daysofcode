#include <iostream>

int numberOfMatches(int n) {
    int matches = 0;
    
    while (n > 1) {
        if (n % 2 == 0) {
            // Even number of teams, pair them up
            matches += n / 2;
            n /= 2;
        } else {
            // Odd number of teams, one team advances, pair the rest
            matches += (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        }
    }
    
    return matches;
}

int main() {
    int n;
    std::cout << "Enter the number of teams: ";
    std::cin >> n;
    
    int result = numberOfMatches(n);
    std::cout << "Number of matches played until a winner is decided: " << result << std::endl;
    
    return 0;
}
