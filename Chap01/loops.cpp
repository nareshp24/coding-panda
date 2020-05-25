#include <iostream>

int main() {

    // Guessing game
    // Ask the user to guess a number
    // if guess > number: tell guess is higher
    // if guess < number: tell guess is lower
    // if guess == number: tell you win!
    // All this should happen within 5 tries

    const int numberToGuess = 300;
    int guess, chancesRemaining = 5;

        std::cout << "Guessing game" << std::endl;
        std::cout << "The range is 1 - 500" << std::endl;

        do { // post-tested loop
            std::cout << "You have " << chancesRemaining << " lives" << std::endl;
            std::cout << "Guess the number:";
            std::cin >> guess;

            if (guess > numberToGuess)
                std::cout << "Your guess is high" << std::endl;
            else if (guess < numberToGuess)
                std::cout << "Your guess is low" << std::endl;
            else {
                std::cout << "You guessed the number. You win!!" << std::endl;
                break;
            }
            chancesRemaining--;  //chancesRemaining = chancesRemaining - 1
        } while (chancesRemaining > 0);

        if(!chancesRemaining)
            std::cout << "GAME OVER!!!" << std::endl;
    return 0;
}