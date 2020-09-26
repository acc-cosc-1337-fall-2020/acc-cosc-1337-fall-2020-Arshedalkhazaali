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
int main() 
{
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade) * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;


	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa;

	return 0;
}

int main ()
{
	
	
	int get_letter_grade_using_if;
	char letter_grade;

	//to ask user for a number between 1 and 100 I need ....
	
	cout<<"Please enter a number between 1-100 and press enter."<<endl;
	cout<<" The program will then show you "<<endl;
	cout<<"the letter grade that corresponds to that number."<<endl;
	cin>>score;

	
	if (score<0 || score >100)
	{
		cout<<"Test scores must be in interval 1-100. "<<endl;
		cout<<"Please exit the program and run it again"<<endl;
	}

	else if (score <60)
	{ 
		letterGrade = 'F';
	}
	else if (score <70)
	{
		letterGrade = 'D';
	}
	else if (score < 80)
	{
		letterGrade = 'C';
	}
	else if (score < 90)
	{
		letterGrade = 'B';
	}
	else if  (score <=100)
	{
		letterGrade = 'A';
	}  

	// and I will this code to display the output  
	cout<<"The letter grade is: " <<letter_grade<<endl;
	system("pause");
	return 0;
}