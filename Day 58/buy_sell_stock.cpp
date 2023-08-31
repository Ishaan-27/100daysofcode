#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for (int i = 0; i < prices.size(); ++i) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input
    int result = maxProfit(prices);
    std::cout << "Maximum Profit: " << result << std::endl;
    
    return 0;
}
