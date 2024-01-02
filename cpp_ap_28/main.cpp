#include "Time.h"

int main() {
    Time t1, t2;

    std::cout << "Enter time 1 (hours minutes seconds): ";
    std::cin >> t1;

    std::cout << "Enter time 2 (hours minutes seconds): ";
    std::cin >> t2;

    std::cout << "Time 1: " << t1 << std::endl;
    std::cout << "Time 2: " << t2 << std::endl;

    Time sum = t1;
    sum += 10; 

    Time difference = t2;
    difference -= 5; 

    std::cout << "Time 1 after increment: " << sum << std::endl;
    std::cout << "Time 2 after decrement: " << difference << std::endl;

    if (t1 == t2) {
        std::cout << "Times are equal.\n";
    }
    else {
        std::cout << "Times are not equal\n";
    }

    return 0;
}
