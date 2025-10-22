#include <iostream>
using namespace std;

class Complex
{
    friend Complex operator+(const Complex &a, const Complex &b);
    friend ostream &operator<<(ostream &COUT, const Complex &b);

private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex &other)
    {
        Complex C(0, 0);
        C.real = real + other.real;
        C.imag = imag + other.imag;
        return C;
    }

    Complex operator++()
    {
        Complex C(0, 0);
        C.real = real + 1;
        C.imag = imag + 1;
        return C;
    }

    Complex add(Complex &other)
    {
        Complex C(0, 0);
        C.real = real + other.real;
        C.imag = imag + other.imag;
        return C;
    }
};

Complex operator+(const Complex &a, const Complex &b)
{
    Complex C(0, 0);
    C.real = a.real + b.real;
    C.imag = a.imag + b.imag;
    return C;
}

ostream &operator<<(ostream &COUT, const Complex &b)
{
    return COUT << b.real << "+" << b.imag << "i" << endl;
}

int main()
{
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3(0.0, 0.0);

    c1.print();
    c2.print();

    c3 = c1.add(c2);
    c3.print();

    Complex c4(0.0, 0.0);
    c4 = c1 + c2;
    c4.print();

    // c4++;
    // c4.print();

    cout << c4;

    return 0;
}