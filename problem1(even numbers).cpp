#include <iostream>
#include <cmath>
using namespace std;
int is_even (int num1,int num2)
{
    int i;
    	cout<<"The even numbers between "<<num1<<" and "<<num2<<" are :\n";
		for(i=num1;i<=num2;i++)
		{
			if(i%2==0)
			cout<<i<<"\n";
		}
		
};
int main ()
{
        int num1, num2;
        cout<<"first number should be smaller than second number"<<endl;
        cout<<"Enter first number: ";
   		cin>> num1;
   		cout<<"Enter second number: ";
        cin>>num2;
        is_even(num1,num2);		
}
