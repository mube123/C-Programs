#include <iostream>
#include <cmath>
using namespace std;
int number;
int factorial(int number);

int main()
{
	int r=4,n=18,d;
	double fact_n,fact_r,fact_d,total_combinations;
		
	fact_n=factorial(n);
	cout<<"Factorial of n="<<fact_n;
	
	fact_r=factorial(r);
	cout<<"\nFactorial of r="<<fact_r;
	
	d=n-r;
	cout<<"\nDifference of n and r is:"<<d;
	fact_d=factorial(d);
	cout<<"\nFactorial of d="<<fact_d;
	
	total_combinations= fact_n/(fact_r*fact_d);
	cout<<"\nTotal number of combinations are:"<<total_combinations;
}
int factorial(int number)
{	int i;
	 int factorial = 1;   
			for(int i = 1; i <= number; i++) 
			{
            factorial *= i;        
			}
			return factorial;
};













