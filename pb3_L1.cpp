#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;
char text[250], * p, a[200][200];
int nr, i, j, k;
int main()
{
	scanf("%[^\n]", &text);
	p = strtok(text, " ");
	while (p)
	{
		if (p[0]!=' ')
		{
			strcpy(a[++nr], p);
			p = strtok(NULL, " ");
		}
		else p = strtok(NULL, " ");
	}
	for(i=1;i<nr;i++)
		for (j = i + 1; j <= nr; j++)
		{
			if (strlen(a[i]) < strlen(a[j]))
				swap(a[i], a[j]);
			else if (strlen(a[i]) == strlen(a[j]))
			{
				for (k = 0; k < strlen(a[i]); k++)
				{
					if (a[i][k] < a[j][k])
					{
						swap(a[i], a[j]);
						break;

					}
					else if (a[i][k] > a[j][k])
					       break;

				}

			}

		}

		
	for (i =1; i<=nr; i++)
	{
		printf("%s", a[i]);
		printf("\n");
	}
	return 0;
}