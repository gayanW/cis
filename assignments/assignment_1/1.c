/* write a c program to find the prime numbers between 1 and 100 */

/* prime number is a natural number greater than 1 that has no positive
 * divisors other than 1 and itslef.
 * source: Wikipedia
 */

#include <stdio.h>

int prime(int);

int main()
{
	int i;
	
	// iterate from 2 to 100
	for (i = 2; i <= 100; ++i) {
		if (prime(i))
			printf("%d ", i);
	}

	return 0;
}

/* function to check whether the number is prime or not */
int prime(int i)
{
	int d;

	for (d = 2; d < i; ++d) {
	if (i % d == 0)
		return 0;
	}

	return 1;
}

	
