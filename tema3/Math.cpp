#include <iostream>
#include "Math.h"
#include <cstring>
#include <cstdarg>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int Math::Add(int x, int y)
{
    return x + y;
}

int Math::Add(int x, int y, int z)
{
    return x + y + z;
}
int Math::Add(double x, double y)
{
    return x + y;
}

int Math::Add(double x, double y, double z)
{
    return x + y + z;
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math::Mul(double x, double y)
{
    return x * y;
}

int Math::Mul(double x, double y, double z)
{
    return x * y * z;
}

int Math::Add(int nr, ...) 
{
    va_list l;
    int s = 0;
    va_start(l, nr);
    for (int i = 0; i < nr; i++)
        s += va_arg(l, int);
    va_end(l);
    return s;
}

char* Math::Add(const char* s1, const char* s2)
{

    if (s1 == NULL || s2 == NULL)
        return NULL;
    int rez = strlen(s1) + strlen(s2) + 1;
    char* rezultat = (char*)malloc(rez);
    memset(rezultat, 0, rez);
    memcpy(rezultat, s1, strlen(s1));
    memcpy(rezultat + strlen(s1), s2, strlen(s2));
    return rezultat;
}