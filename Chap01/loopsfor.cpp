#include <iostream>

int main() {

    bool canDrive;
    int numberOfPeople;

    // for(initialization; condition; update)
    //{
    // code for execution
    // }

        std::cout << "Enter the number of people:" << std::endl;
        std::cin >> numberOfPeople;


    for (int i = 1; i <= numberOfPeople; i++) {

        std::cout << "Do you know how to drive? 1 (Yes) or 0 (No):" << std::endl;
        std::cin >> canDrive;

        if (canDrive) {

            int age;
            std::cout << "Enter your age:";
            std::cin >> age;

            if (age >= 18 && age < 21)
                std::cout << "Eligible for Learner's permit" << std::endl;
            else if (age >= 21)
                std::cout << "Eligible for Full-time license" << std::endl;
            else
                std::cout << "Minimum age to drive is 18 years" << std::endl;
        } else
            std::cout << "Must know how to drive for obtaining license" << std::endl;
    }
    return 0;
}