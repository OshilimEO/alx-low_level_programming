#include "main.h"
/**
  * reverse _array - reverse arrays of integer
  * @a: array
  * @n: number of elemaents of an array
  *
  * Return: void
  */
void reverse_array(int *a, int n);
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
