#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList A;
    A.Init();
    A.Add(5);
    A.Add(12);
    A.Add(3);
    A.Add(2);
    A.Add(50);
    A.Add(1);
    A.Add(4);
    A.Add(14);
    A.Sort();
    A.Print();
    return 0;
}
