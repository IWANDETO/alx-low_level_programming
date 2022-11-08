#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function
 * num.: A variable number to calculate sum f
 * Return:return 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int index, sum = 0;

	va_start(num, n);
	for (index = 0; index < n; index++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
