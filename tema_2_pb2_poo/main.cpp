#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "class.h"
#include "compare.h"
#include <cstring>
using namespace std;

int main()
{  float x1, y1, z1, x2, y2, z2;
   char name1[250], name2[250];
   Student s1;
   Student s2;
   cout << "Nume student 1:";
   strcpy(name1, s1.setNameStudent());
   cout << "Nota Mate:";
   x1 = s1.setGradeMath();
   cout << "Nota Engleza:";
   z1 = s1.setGradeEnglish();
   cout << "Nota Istorie:";
   y1 = s1.setGradeHistory();
   cout << "Media generala student 1:" << s1.GetAverageGrade(x1, y1, z1) << endl;
   cout << "Nume student 2:";
   strcpy(name2, s2.setNameStudent());
   cout << "Nota Mate:";
   x2 = s2.setGradeMath();
   cout << "Nota Engleza:";
   z2 = s2.setGradeEnglish();
   cout << "Nota Istorie:";
   y2 = s2.setGradeHistory();

   cout << "Media generala student 2:" << s2.GetAverageGrade(x2, y2, z2) << endl;
   cout << "Compararea mediilor  matematica:" << CompareMath(x1, x2) << endl;
   cout << "Compararea mediilor istorie:" <<CompareHistory(y1, y2) << endl;
   cout << "Compararea mediilor cengleza:" << CompareEnglish(z1, z2) << endl;
   cout << "Compararea mediilor generale:" << CompareAverage(s1.GetAverageGrade(x1, y1, z1), s2.GetAverageGrade(x2, y2, z2)) << endl;
   cout << "Compararea numelor :" <<CompareName(name1, name2) << endl;

}
