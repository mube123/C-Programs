#include<iostream>
#include <cmath>
using namespace std;
void factorial(int n);
int main()
{
	int num;
	long long f;
	f=18*17*16*15*14*13*12*11*10*9*8*7*6*5*4*3*2*1;
	cout<<"f="<<f;
	cout<<"\nEnter a number:";
	cin>>num;
	factorial(num);
}
void factorial(int n)
{
	int i;
	long fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"factorial of"<<n<<"is"<<fact;
	
}
