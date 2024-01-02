#include "Complex.h"

int main() {
    Complex c1, c2;

    std::cout << "Enter a complex number (real imaginary): ";
    std::cin >> c1;

    std::cout << "Enter another complex number (real imaginary): ";
    std::cin >> c2;

    std::cout << "Complex number 1: " << c1 << std::endl;
    std::cout << "Complex number 2: " << c2 << std::endl;

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    if (c1 == c2) {
        std::cout << "Complex numbers are equal.\n";
    }
    else {
        std::cout << "Complex numbers are not equal.\n";
    }

    return 0;
}