#include <iostream>

// Note:
// Function Overloading: *Signature (Identifier + input parameters)

// Hidden "this" pointer: Method call => first parameter is the address of the instance/object [* hidden]
// Advantages
// 1. avoid naming conflict
// 2. return the reference to that object (itself)

// Operator Overloading
// operators are defined as functions.
// Function name 'operator-symbol'

class ComplexNumber
{
public:
    ComplexNumber(int real=0, int imaginary=0):m_real(real), m_imaginary(imaginary)
    {}

    // Setters
    void setReal (int real) // Non-const method
    {
        m_real = real;
    }
    void setImaginary(int imaginary)
    {
        m_imaginary = imaginary;
    }

    // Getters
    int getReal() const
    {
        return m_real;
    }

    int getImaginary() const
    {
        return m_imaginary;
    }

    // Method for addition
    ComplexNumber& add(ComplexNumber& other)
    {
        m_real = m_real + other.getReal();
        m_imaginary = m_imaginary + other.getImaginary();
        return *this;
    }
    // Prints the Complex Number
    void print() const
    {
        if (m_imaginary>=0)
            std::cout<<m_real<<" + "<<m_imaginary<<"i"<<std::endl;
        else
            std::cout<<m_real<<" -  "<<(-m_imaginary)<<"i"<<std::endl;
    }

    // Operators overloading as a member function
    ComplexNumber operator+(ComplexNumber& right)
    {
        int real = this->m_real + right.getReal();
        int imaginary = this->m_imaginary + right.getImaginary();

        return ComplexNumber(real, imaginary) ;
    }


private:
    int m_real;
    int m_imaginary;
};

// Arithmetic Operators
// Redefinition of the '-' operators to add two complex Numbers
ComplexNumber operator-(ComplexNumber& left, ComplexNumber& right)
{
    int real = left.getReal() - right.getReal();
    int imaginary = left.getImaginary() - right.getImaginary();

    return ComplexNumber(real, imaginary) ;
}

// Unary Operator
void operator++(ComplexNumber& num)
{
    num.setReal(num.getReal()+1);
    num.setImaginary(num.getImaginary()+1);
}

// I/O operator
// Our own version of insertion operator to output the Complex Number for printing it in the console
std::ostream& operator<<(std::ostream& out, ComplexNumber& num )
{
    if (num.getImaginary()>=0)
        out<<num.getReal()<<" + "<<num.getImaginary()<<"i";
    else
        out<<num.getReal()<<" - "<<(-num.getImaginary())<<"i";
    return out;
}


int main()
{

    ComplexNumber x1(4,-5); // x1 = 4 - 5i
    ComplexNumber x2(2,3); // x2 = 2 + 3i

    ComplexNumber x3 = x1 + x2; //
    // x1.operator+(x2)
    // operator+(&x1, x2)

    const ComplexNumber const_x1(1,2);
    const_x1.getReal();

    std::cout<<"x1: "<<x1<<std::endl;

    std::cout<<"x2: "<<x2<<std::endl;

    std::cout<<"x3: ";
    x3.print(); // print(&x3)
    std::cout<<std::endl; // 6 - 2i

    return 0;
}