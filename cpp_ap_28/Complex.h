#ifndef Complex_h
#define Complex_h

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex& other);

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    bool operator!=(const Complex& other) const;
    bool operator==(const Complex& other) const;
    Complex operator()() const; 
    friend std::istream& operator>>(std::istream& input, Complex& complex);
    friend std::ostream& operator<<(std::ostream& output, const Complex& complex);
};

#endif
