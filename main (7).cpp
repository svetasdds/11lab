#include <iostream>
#include <stdexcept>

int getThousandDigit(int number) {
    if (number <= 999) {
        throw std::invalid_argument("Number must be greater than 999");
    }
    return (number / 1000) % 10;
}

int main() {
    int number;
    std::cout << "Enter a number greater than 999: ";
    std::cin >> number;

    try {
        int thousandDigit = getThousandDigit(number);
        std::cout << "The thousand digit is: " << thousandDigit << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
