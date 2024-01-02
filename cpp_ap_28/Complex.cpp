#include "Complex.h"

Complex::Complex() : real(0), imaginary(0) {
}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {
}

Complex::Complex(const Complex& other) {
	real = other.real;
	imaginary = other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
	return Complex(real - other.real, imaginary - other.imaginary);
}

bool Complex::operator!=(const Complex& other) const {
	return real != other.real || imaginary != other.imaginary;
}

bool Complex::operator==(const Complex& other) const {
	return real == other.real && imaginary == other.imaginary;
}

Complex Complex::operator()() const {
	return Complex(real, -imaginary);
}

std::istream& operator>>(std::istream& input, Complex& complex) {
	input >> complex.real >> complex.imaginary;
	return input;
}

std::ostream& operator<<(std::ostream& output, const Complex& complex) {
	output << complex.real << " + " << complex.imaginary << "i";
	return output;
}
