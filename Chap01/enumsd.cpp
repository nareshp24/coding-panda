// SUNDAY - 0
// MONDAY - 1
// TUESDAY - 2
// SATURDAY - 6

#include <iostream>

int main() {

    enum week {SUNDAY = 35, MONDAY, TUESDAY = 47, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

        week today;
        today = THURSDAY;
        std::cout << "Day = " << today << std::endl;

    return 0;
}