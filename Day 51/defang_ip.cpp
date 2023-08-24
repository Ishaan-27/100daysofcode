#include <iostream>
#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string defangedAddress;
        for (char c : address) {
            if (c == '.') {
                defangedAddress += "[.]";
            } else {
                defangedAddress += c;
            }
        }
        return defangedAddress;
    }
};

int main() {
    Solution solution;
    std::string ipAddress = "255.100.50.0"; // Example IP address
    std::string defangedIP = solution.defangIPaddr(ipAddress);
    
    std::cout << "Defanged IP address: " << defangedIP << std::endl;
    
    return 0;
}
