#include <iostream>

using namespace std;

int main() {

        string sentence;

            cout << "Enter a sentence:\n";
            getline(cin, sentence);

        bool isFirstChar = true;
            for(const char &c : sentence) {
                if(!isFirstChar && c >= 'A' && c <= 'Z')
                    cout << " ";
                cout << c;
                isFirstChar = false;
            }
    return 0;
}

// MyNameIsAshish => My Name Is Ashish