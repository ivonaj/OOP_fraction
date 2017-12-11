#include"Fraction.h"
#include<iostream>
#include<exception>
#include<string>
using namespace std;

int main() {
	int num, den = 0;
	try {
		while (1) {
			cout << "define two fractions:" << endl;
			cout << "First numerator:" << endl;
			cin >> num;
			cout << "First denominator:" << endl;
			cin >> den;
			Fraction frac1(num, den);
			cout << display(frac1) << endl;

			cout << "Second numerator:" << endl;
			cin >> num;
			cout << "Second denominator:" << endl;
			cin >> den;
			Fraction frac2(num, den);
			cout << display(frac2) << endl;

			cout << "Choose operation among + - * / = ! < >  ";
			Fraction result;

			char oper;
			bool res;
			cin >> oper;
			switch (oper) {
			case '+':
				result = frac1 + frac2;
				result.pretty();
				cout << display(result) << endl;
				break;
			case '-':
				result = frac1 - frac2;
				result.pretty();
				cout << display(result) << endl;
				break;
			case '*':
				result = frac1 * frac2;
				result.pretty();
				cout << display(result) << endl;
				break;
			case '/':
				result = frac1 / frac2;
				result.pretty();
				cout << display(result) << endl;
				break;
			case '=':
				res = frac1 == frac2;
				cout << (res ? "True" : "False");
				break;
			case '!':
				res = frac1 != frac2;
				cout << (res ? "True" : "False");
				break;
			case '>':
				res= frac1 > frac2;
				cout << (res ? "True" : "False");

				break;
			case '<':
				res = frac1 < frac2;
				cout << (res? "True" : "False");
				break;
			default:
				cout << "Not an operation" << endl;
			}




		}
	}catch (runtime_error err) {
			cout << err.what() << endl;
			return 1;

	}
	return 0;



}