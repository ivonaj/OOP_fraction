#include "Fraction.h"

Fraction::Fraction()
{
    num = 0;
    den = 1;
}

Fraction::~Fraction()
{
}
Fraction::Fraction(int newNum, int newDen)
{
    num = newNum;
    den = newDen;
}

int Fraction::getNum()
{
    return num;
}

int Fraction::getDen()
{
    return den;
}

string Fraction::toString()
{
    string fracString;
    fracString= to_string(num)+"/"+ to_string(den);
    return fracString;
}

Fraction Fraction::operator+(Fraction newFrac)
{
    return Fraction(num*newFrac.den + newFrac.num*den,den*newFrac.den);
}

Fraction Fraction::operator-(Fraction newFrac)
{
    return Fraction(num*newFrac.den - newFrac.num*den, den*newFrac.den);
}

Fraction Fraction::operator*(Fraction newFrac)
{
    return Fraction(num*newFrac.num,den*newFrac.den);
}

Fraction Fraction::operator/(Fraction newFrac)
{
    return Fraction(num*newFrac.den,den*newFrac.num);
}

bool Fraction::operator== (Fraction frac){
    if((num*frac.den)==(frac.num*den))
        return true;
    return false;
}
bool Fraction::operator!=(Fraction frac){
    if((num*frac.den)!=(frac.num*den))
        return true;
    return false;
}
bool Fraction::operator<(Fraction frac){
    if ((num*frac.den)<(frac.num*den))
            return true;
    return false;
}
bool Fraction::operator>(Fraction frac){
    if ((num*frac.den)>(frac.num*den))
            return true;
    return false;
}

int Fraction::gcd(Fraction frac)
{
    int rest;
    int a=frac.num;
    int b=frac.den;

    while(b>0){
        rest=a%b;
        a=b;
        b=rest;
    }
    return a;

    }

int Fraction::lcm(Fraction frac){
    int leastComMul=abs(frac.num*frac.den)/gcd(frac);
    return leastComMul;

}

void Fraction::pretty(){
    int div=gcd(Fraction(num,den));
    num/=div;
    den/=div;


}

int main() {
    int num1, den1=0;
    cin >> num1 >> den1;
    Fraction frac1(num1, den1);
    cout<< frac1.toString()<< endl;
    int num2, den2=0;
    cin >> num2 >> den2;
    Fraction frac2(num2, den2);
    cout << frac2.toString() << endl;

    Fraction result;
    result = frac1 * frac2;
    result.pretty();
    cout <<result.toString()<< endl;
    bool equality=(frac1==frac2);
    cout<<equality;


    return 0;



}