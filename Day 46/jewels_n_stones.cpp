#include <iostream>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int stoneCounts[256] = {0}; // Assuming ASCII characters
    
    for (char stone : stones) {
        stoneCounts[stone]++;
    }
    
    int jewelCount = 0;
    for (char jewel : jewels) {
        jewelCount += stoneCounts[jewel];
    }
    
    return jewelCount;
}

int main() {
    string jewels, stones;
    cout << "Enter types of jewels: ";
    cin >> jewels;
    cout << "Enter types of stones you have: ";
    cin >> stones;
    
    int result = numJewelsInStones(jewels, stones);
    cout << "Number of stones that are also jewels: " << result << endl;
    
    return 0;
}
