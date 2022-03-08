#include<iostream>
#include "NumberList.h"

using namespace std;

void NumberList::Init()
{
    c = 0;
    for (int i = 0; i < 10; i++)
    {
        n[i] = 0;
    }
}

bool NumberList::Add(int x)
{

    n[c] = x;
    if (c >= 10)

    {
        cout << "S-a depasit nr de elemente.";
        return 0;
    }


    c++;

}


void NumberList::Sort()
{

    {for (int i = 0; i < c - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (n[i] > n[j])
                swap(n[i], n[j]);
        }
    }
    }
}

void NumberList::Print()
{

    for (int i = 0; i < c; i++)
        cout << n[i] << " ";

}
