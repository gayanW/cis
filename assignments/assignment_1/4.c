/* write a c program to print the first 10 square numbers and
 * its squared values to the console */

// 1 4 9 16

#include <stdio.h>

int main()
{
	int sqrNum, i;

	printf("Square Number\tIts Squared Value\n");

	// iterate from 1 to 10
	for (i = 1; i <= 10; i++) {
		sqrNum = i * i;
		printf("%d\t\t%d", sqrNum, sqrNum * sqrNum);
		
		// new line
		printf("\n");
	}

	return 0;
}
