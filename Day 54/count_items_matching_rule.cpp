#include <iostream>
#include <vector>
#include <string>

int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
    int count = 0;
    
    for (int i = 0; i < items.size(); ++i) {
        if (ruleKey == "type" && items[i][0] == ruleValue) {
            count++;
        } else if (ruleKey == "color" && items[i][1] == ruleValue) {
            count++;
        } else if (ruleKey == "name" && items[i][2] == ruleValue) {
            count++;
        }
    }
    
    return count;
}

int main() {
    std::vector<std::vector<std::string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"},
        {"computer", "silver", "dell"},
        {"phone", "blue", "samsung"}
    };
    
    std::string ruleKey = "color";
    std::string ruleValue = "silver";
    
    int matchingCount = countMatches(items, ruleKey, ruleValue);
    
    std::cout << "Number of items matching the rule: " << matchingCount << std::endl;
    
    return 0;
}
