#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main ()
{
	
	
	std::string letter_grade;

	//to ask user for a number between 1 and 100 I need ....
	int score;
	cout<<"Please enter a number between 1-100 and press enter."<<std::endl;
	cout<<" The program will then show you "<<std::endl;
	cout<<"the letter grade that corresponds to that number."<<std::endl;
	cin>>score;

	if(score >= 0 && score <= 100)
	{
		letter_grade = get_letter_grade_using_if(score);
		// and I will this code to display the output  
		cout<<"The letter grade is: " <<letter_grade<<std::endl;
		
		letter_grade = get_letter_grade_using_switch(score);
		cout<<"The letter grade is: " <<letter_grade<<std::endl;
	}
	else 
	{
		cout<<"Invalid grade";
	}

	return 0;
}