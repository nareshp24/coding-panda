include <iostream>

class Rectangle {
private:
    int length;
    int breadth;

public:
    // constructor
    Rectangle(int newLength, int newBreadth) {
        length = newLength;
        breadth = newBreadth;
    }

    Rectangle(int dim) {
        length = dim;
        breadth = dim;
    }

    // default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // mutator methods
    void setDim(int newLength, int newBreadth);
    void setLength(int newLength); // change length of rectangle obj
    void setBreadth(int newBreadth); // change breadth of rect obj

    // accessor methods
    int getLength() { return length; } // returns length of rectangle obj
    int getBreadth() { return breadth; } // returns breadth of rectangle obj

    void show(); // displays values of data members

    int area(); // returns area of rectangle object
    bool isSquare(); // returns true if the rectangle is a square
};

void Rectangle::setDim(int newLength, int newBreadth) {
    length = newLength;
    breadth = newBreadth;
}

void Rectangle::setLength(int newLength) {
    length = newLength;
}

void Rectangle::setBreadth(int newBreadth) {
    breadth = newBreadth;
}

void Rectangle::show() {
    std::cout << "Length = " << length << " Breadth = " << breadth << std::endl;
}

int Rectangle::area() {
    return length * breadth;
}

bool Rectangle::isSquare() {
    return length == breadth;
}

// not a class method
int perimeter(Rectangle r) {
    int rlength = r.getLength();
    int rbreadth = r.getBreadth();
    
        int peri = rlength + rlength + rbreadth + rbreadth;

    return peri;
}

int main() {
    // int i;
    Rectangle r1(10, 12), r2(25), r3;
    r1.show();
    r2.show();
    r3.show();

    int peri = perimeter(r1);
    std::cout << "Perimeter of r1: " << peri << std::endl;

    return 0;
}