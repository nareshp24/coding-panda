#include <iostream>

class Rectangle {
private:
    int length;
    int breadth;

public:
    int area();
    void changeLength(int);
    void changeDim(int, int);
    bool isSquare();
};

int Rectangle::area() {
    return length * breadth;
}

void Rectangle::changeDim(int newLength, int newBreadth){
    length = newLength;
    breadth = newBreadth;
}

void Rectangle::changeLength(int newLength){
    length = newLength;
}

bool Rectangle::isSquare() {
    return length == breadth;
}


int main() {


}


