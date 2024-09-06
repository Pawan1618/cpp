#include <iostream>

using namespace std;

class ComplexNumber {
public:
    ComplexNumber(double real = 0, double imaginary = 0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    friend ComplexNumber multiply(ComplexNumber&, ComplexNumber&);

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

private:
    double real;
    double imaginary;
};

ComplexNumber multiply(ComplexNumber& c1, ComplexNumber& c2) {
    double realPart = c1.real * c2.real - c1.imaginary * c2.imaginary;
    double imaginaryPart = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return ComplexNumber(realPart, imaginaryPart);
}

int main() {
    double real1, imag1, real2, imag2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    ComplexNumber c1(real1, imag1);
    ComplexNumber c2(real2, imag2);

    ComplexNumber result = multiply(c1, c2);

    cout << "The product of the complex numbers is: ";
    result.display();

    return 0;
}