#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> convertTemperature(double celsius) {
    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;
    
    return {kelvin, fahrenheit};
}

int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    std::vector<double> ans = convertTemperature(celsius);

    std::cout << "Temperature in Kelvin: " << ans[0] << std::endl;
    std::cout << "Temperature in Fahrenheit: " << ans[1] << std::endl;

    return 0;
}
