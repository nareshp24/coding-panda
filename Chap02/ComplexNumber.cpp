#include <iostream>

// Operator Overloading
// Function Overloading
// Hidden "this" pointer

class ComplexNumber
{
public:
    ComplexNumber(int real=0, int imaginary=0):m_real(real), m_imaginary(imaginary)
    {}
    void setReal (int real)
    {
        m_real = real;
    }
    void setImaginary(int imaginary)
    {
        m_imaginary = imaginary;
    }
    int getReal()
    {
        return m_real;
    }
    int getImaginary()
    {
        return m_imaginary;
    }

    void add(ComplexNumber& other)
    {
        m_real = m_real + other.getReal();
        m_imaginary = m_imaginary + other.getImaginary();
    }

    void print()
    {
        if (m_imaginary>=0)
            std::cout<<m_real<<" + "<<m_imaginary<<"i"<<std::endl;
        else
            std::cout<<m_real<<" -  "<<(-m_imaginary)<<"i"<<std::endl;
    }

private:
    int m_real;
    int m_imaginary;
};


ComplexNumber operator+(ComplexNumber& left, ComplexNumber& right)
{
    int real = left.getReal() + right.getReal();
    int imaginary = left.getImaginary() + right.getImaginary();
    ComplexNumber temp(real, imaginary) ;// 0x123434 (6 - 2i) => temp
    return temp;
}

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

    // x1.add(x2); // x1 = x1 + x2

    // int a = 10 + 12  => operator + => adds 2 numbers
    // string s = "Hello " + "World" => operator + => concatinates 2 strings
    // Operator + (complex Number) => x1 = a1 + b1i, x2 = a2 + b2i,    x1 + x2 = (a1+a2) + (b1+b2)i

    ComplexNumber x3 = x1 + x2;

    std::cout<<x1<<std::endl;

    x3.print(); // 6 - 2i
    return 0;
}
