#include <iostream>
using namespace std;

int main() {

        int input_number = 0, key = 0;
        char corresponding_alphabet;

            std::cout << "Enter a numeric value:";
            std::cin >> input_number;

            key = 'A' + input_number % 26 ;
            corresponding_alphabet = char(key);

            std::cout << "Corresponding alphabet:" <<  corresponding_alphabet;

    return 0;
}