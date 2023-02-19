/*Define a function pow() that raises a base number to a given power. E.g. pow(2, 3) would give 8 by calculating two
cubed*/

#include <iostream>
#include <cmath>
using namespace std;

int pow();
int main()
{
	pow();
}
int pow()
{	int base,exponent,p;
	cout<<"Enter base=";
	cin>>base;
	cout<<"Enter power=";
	cin>>exponent;
	p=pow(base,exponent);
	cout<<"Power of the given number is:"<<p;
}
