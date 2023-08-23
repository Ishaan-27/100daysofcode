#include <iostream>
#include <string>

bool judgeCircle(std::string moves) {
    int x = 0, y = 0;

    for (char move : moves) {
        if (move == 'R') {
            x++;
        } else if (move == 'L') {
            x--;
        } else if (move == 'U') {
            y++;
        } else if (move == 'D') {
            y--;
        }
    }

    return x == 0 && y == 0;
}

int main() {
    std::string moves;
    std::cout << "Enter the robot's move sequence: ";
    std::cin >> moves;

    if (judgeCircle(moves)) {
        std::cout << "The robot returns to the origin.\n";
    } else {
        std::cout << "The robot does not return to the origin.\n";
    }

    return 0;
}
