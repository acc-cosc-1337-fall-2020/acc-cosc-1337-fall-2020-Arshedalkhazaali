#include "decisions.h"
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	return credit_points / credit_hours;
}

int get_letter_grade_using_if (std::int grade);
{
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
	return 0;
}

string get_letter_grade_using_switch(int grade );
{
	string result;
	switch (grade)
	{
	
	case 1:
		result = "option 1"
		break;
	case 2:
		result = "option 2"
		break;
	case 3:
		result = "option 3"
		break;
	case 4:
		result = "option 4"
		break;
	
	}

	return result 
}