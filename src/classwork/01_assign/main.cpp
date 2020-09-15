//Write the include statement for types.h here
#include<iostream>
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen
using std::cout;	using std::cin;


int main() 
{
	int num1, num2=4;
	cout<<"Enter a number: ";
	cin>>num2;

	int result = multiply_numbers(num1);
	cout<<"\n"<<result;

	result = multiply_numbers(num2);
	cout<<"\n"<<result;

	return 0;
}
