#include "Date.h"

int main() {
    Date date1, date2;
    int choice, days;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Enter date 1\n";
        std::cout << "2. Enter date 2\n";
        std::cout << "3. Increase day for date 1\n";
        std::cout << "4. Add days to date 1\n";
        std::cout << "5. Subtract days from date 1\n";
        std::cout << "6. Compare dates\n";
        std::cout << "7. Display dates\n";
        std::cout << "8. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "\nEnter date 1 (DD MM YYYY): ";
            std::cin >> date1;
            break;

        case 2:
            std::cout << "\nEnter date 2 (DD MM YYYY): ";
            std::cin >> date2;
            break;

        case 3:
            date1.increaseDay();
            std::cout << "\nDay increased for date 1\n";
            break;

        case 4:
            std::cout << "\nEnter days to add to date 1: ";
            std::cin >> days;
            date1 += days;
            std::cout << days << " days added to date 1\n";
            break;

        case 5:
            std::cout << "\nEnter days to subtract from date 1: ";
            std::cin >> days;
            date1 -= days;
            std::cout << days << " days subtracted from date 1\n";
            break;

        case 6:
            if (date1 == date2) {
                std::cout << "Date 1 is equal to Date 2\n";
            }
            else if (date1 < date2) {
                std::cout << "Date 1 is earlier than Date 2\n";
            }
            else {
                std::cout << "Date 1 is later than Date 2\n";
            }
            break;

        case 7:
            std::cout << "Date 1: " << date1 << "\n";
            std::cout << "Date 2: " << date2 << "\n";
            break;

        case 8:
            std::cout << "Exiting program\n";
            break;

        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}
