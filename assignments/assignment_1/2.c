/* write a program to find the value of factorial 3. (3!) */

#include <stdio.h>

/* function prototypes */
int fact(int);

int main()
{
	int num = 3, factorial = 1;

	factorial = fact(num);

	printf("Factorial of %d is %d.\n", num, factorial);

	return 0;
}

/* function to find the factorial of a number */
int fact(int num)
{
	int i, factorial = 1;

	// iterate from 1 to num
	for (i = 1; i <= num; i++) {
		factorial *= i;
	}

	return factorial;
}
