#include <iostream>
using namespace std;

int main() {

    int range = 0, FACTOR_A, FACTOR_B;

        cout << "Enter the range:" << endl;
        cin >> range;
        cout << "Enter the two factors:" << endl;
        cin >> FACTOR_A >> FACTOR_B;

    bool foo, bar;
        for(int i = 1; i <= range; i++) {

            foo = (i % FACTOR_A == 0);
            bar = (i % FACTOR_B == 0);

            if (foo && bar)
                cout << "FooBar" << endl;
            else if(foo)
                cout << "Foo" << endl;
            else if(bar)
                cout << "Bar" << endl;
            else
                cout << i << endl;
        }

    return 0;
}