#include <iostream>
#include <vector>

std::vector<int> sumZero(int n) {
    std::vector<int> result;
    
    if (n % 2 == 1) {
        // If n is odd, add a 0 to the result first.
        result.push_back(0);
    }
    
    // Generate n/2 positive and negative integers.
    for (int i = 1; i <= n / 2; i++) {
        result.push_back(i);
        result.push_back(-i);
    }
    
    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    std::vector<int> result = sumZero(n);
    
    std::cout << "Array of " << n << " unique integers that add up to 0:" << std::endl;
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}
