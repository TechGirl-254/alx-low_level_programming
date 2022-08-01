#include "main.h"

int _sqrt_recursion(int n)
{
	int y = 2;

	if ((n * n^(y - 1) % n) == n)
	{
		return (-1);
	}
	return (n * (_sqrt_recursion(n^(y - 1))));
}
