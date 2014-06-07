/* write a c program to print first 100 triangle numbers to the console */
// 1 3(+2) 6(+3) 10(+4) 15

#include <stdio.h>

int main()
{
	int i, tNum = 0;

	// loop that prints first 100 triangle numbers
	for (i = 1; i <= 100; i++)
	{
		tNum += i;
		printf("%d ", tNum);
	}

	return 0;
}
