#include "compare.h"
#include "class.h"
#include <iostream>
#include <cstring>

using namespace std;

int CompareMath(float x, float y)
{  
	if(x==y)
	return 0;
	if (x > y)
		return 1;
   return -1;
}

int CompareEnglish(float x, float y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
 return -1;
}


int CompareHistory(float x, float y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	 return -1;
}


int CompareAverage(float x, float y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	 return -1;
}


int CompareNume(char name1[250], char name2[250])
{  
	int lg_mini = strlen(name1);
	if (strlen(name2) < lg_mini)
		lg_mini = strlen(name2);
	for (int i = 0; i < lg_mini; i++)
		if (name1[i] > name2[i])
			return 1;
		else if (name1[i] < name2[i])
			return -1;
	return 0;
}
