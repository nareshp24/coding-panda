// Algorithm:
/*
1. Start from g = 0
2. If g*g = x, then g is the square root of x
3. Otherwise, increment g by 1
4. Go to step 2

 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float number;
    const float epsilon = 0.01;

        cout << "Enter a number: " << endl;
        cin >> number;
        //number = number < 0 ? -number : number;

    float guess = 0;
    long int iterations = 0;
        while (fabs(guess * guess - number) >= epsilon && (guess * guess  <= number)) {
            guess = guess + 1;
            iterations++;
        }

        //if(fabs(guess * guess - number) < epsilon)
            cout << "The root of " << number << " is: " << guess << endl;
        cout << "Iterations: " << iterations << endl;

    return 0;
}