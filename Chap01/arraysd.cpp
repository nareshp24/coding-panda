#include <iostream>

int main() {

    const int MAX_SIZE = 10;
    int array[MAX_SIZE], size;  // creating an array

        // To enter 3 elements
        // store these elements in an array
        // display the square of elements

        std::cout << "How many elements do you want to enter?" << std::endl;
        std::cin >> size;

        std::cout << "Enter " << size << " elements" << std::endl;
        // reading elements into an array
        for(int i = 0; i < size; i++)
            std::cin >> array[i];


        for(const auto &i : array)
            std::cout << "The square of " << i << " is: " << i * i << std::endl;

    return 0;

}