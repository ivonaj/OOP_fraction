#pragma once
#include<cmath>
#include<iostream>
#include<exception>
#include<string>
using namespace std;


class Fraction
{
private: 
	int num;
	int den;
public:
	Fraction();
	~Fraction();
	Fraction(int, int);
	int getNum();
	int getDen();

	string toString();
	Fraction operator+ (Fraction);
	Fraction operator- (Fraction);
	Fraction operator* (Fraction);
	Fraction operator/ (Fraction);
	bool operator== (Fraction);
	bool operator!=(Fraction);
    bool operator<(Fraction);
    bool operator>(Fraction);

	int gcd(Fraction); //greatest common divisor
	int lcm(Fraction);
	void pretty();




};

