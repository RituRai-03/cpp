//Write a class Complex to excute two Complex numbers and return their sum.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    float r1, i1, r2, i2;
    Complex c1, c2, c3;

    cout << "Enter real and imag part of c1: " << endl;
    cin >> r1 >> i1;
    c1.setComplex(r1, i1);

    cout << "Enter real and imag part of c2: " << endl;
    cin >> r2 >> i2;
    c2.setComplex(r2, i2);

    c3 = c1.add(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}