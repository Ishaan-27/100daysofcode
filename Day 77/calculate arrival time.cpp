#include <iostream>  

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int scheduledArrivalTime = arrivalTime;
        int delayedArrivalTime = scheduledArrivalTime + delayedTime;
        
        if (delayedArrivalTime >= 24) {
            delayedArrivalTime = delayedArrivalTime - 24;
        }
        
        return delayedArrivalTime;
    }
};

int main() {
    Solution solution;
    int arrivalTime = 18;   // Replace with your arrival time
    int delayedTime = 6;    // Replace with your delayed time
    
    int result = solution.findDelayedArrivalTime(arrivalTime, delayedTime);
    
    std::cout << "Delayed Arrival Time: " << result << std::endl;
    
    return 0;
}
