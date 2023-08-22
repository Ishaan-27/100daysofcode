#include <iostream>
#include <vector>
#include <string>

std::string destCity(std::vector<std::vector<std::string>>& paths) {
    for (const auto& path1 : paths) {
        bool hasOutgoing = false;
        for (const auto& path2 : paths) {
            if (path1[1] == path2[0]) {
                hasOutgoing = true;
                break;
            }
        }
        if (!hasOutgoing) {
            return path1[1];
        }
    }
    return ""; // Return empty string if no destination city is found
}

int main() {
    // Example paths
    std::vector<std::vector<std::string>> paths = {
        {"London", "New York"},
        {"New York", "Lima"},
        {"Lima", "Sao Paulo"}
    };

    std::string destination = destCity(paths);
    std::cout << "The destination city is: " << destination << std::endl;

    return 0;
}
