/* write a c program to compute and print
 * the first N Fibonacci numbers. Here N = 10
 */

// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>

int main()
{
	int a = 0, b = 1, n = 10;

	// variable to temporarily hold the value of a
	int _a = a;

	// iterate 10 times
	while (n--) {
		printf("%d ", a);
	
		_a = a;
		a = b;
		b = _a + b;
	}

	return 0;
}
