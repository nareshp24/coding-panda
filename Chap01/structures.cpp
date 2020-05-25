#include <iostream>

struct Triangle {
    int height;
    int base;
};

float area(struct Triangle t){
    return 0.5 * t.base * t.height;
}

struct Rectangle {
    int length;
    int breadth;
};
typedef struct Rectangle Rectangle;

int area(Rectangle r) {
    return r.length * r.breadth;
}

void changeLength(Rectangle *pr, int length) {
    pr->length = length;
}

void changeDim(Rectangle *pr, int length, int breadth) {
    pr->length = length;
    pr->breadth = breadth;
}

bool isSquare(Rectangle r) {
    return r.length == r.breadth;
}



int main() {

    Rectangle r1 = {20, 20};
    Rectangle r2 = {15, 25};

    std::cout << "r1 is a square: " << isSquare(r1) << std::endl;


    int a, b, c;
    std::string d, e, f;

    c = a + b;
    f = e + d;

    return 0;
}