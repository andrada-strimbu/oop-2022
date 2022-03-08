#ifndef NUMBERLIST_H_INCLUDED
#define NUMBERLIST_H_INCLUDED

class NumberList
{

	int n[10];

	int c;

public:

	void Init();          // count will be 0
	bool Add(int x);      // adds X to the numbers list and increase the data member count.
						  // if count is bigger or equal to 10, the function will return fals
	void Sort();          // will sort the numbers vector
	void Print();         // will print the current vector

};
#endif
