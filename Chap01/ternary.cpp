#include <iostream>

int main() {

    // Find max of two numbers first using if-else and then using ternary

    int a, b, c;

        std::cout << "Enter three numbers:" << std::endl;
        std::cin >> a >> b >> c;

    int max = (a > b ? (a > c ? a : c) : (b > c ? b : c));

        std::cout << "Max  =  " << max << std::endl;

    return 0;
}