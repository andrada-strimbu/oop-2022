#include "class.h"
#include <iostream>
using namespace std;

char* Student::setNameStudent()
{ 
	char name[250];
	cin >> name;
	return name;
}

int Student::setGradeMath()
{
	float x;
	cin >> x;
	return x;
}

int Student::setGradeEnglish()
{
	float x;
	cin >> x;
	return x;

}

int Student::setGradeHistory()
{
	float x;
	cin >> x;
	return x;
}

int Student::GetAverageGrade(float x, float y, float z)
{
	float m;
	m = (x + y + z) / 3;
	return m;
}
