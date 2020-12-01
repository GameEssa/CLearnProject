#pragma once

class Complex
{
public:
	Complex(double r = 0, double i = 0)
		: re (r), im (i)
	{ }
	
	Complex& operator += (const Complex&);
	
	double real() { return re; }

	double imag() { return im; }

	Complex();

	~Complex();
private:
	double re;

	double im;
};

