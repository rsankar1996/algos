#include "select.h"

static void swap (int * a, int * b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}

int sort (int * arr, int len)
{
	int min_idx = 0;
	int i = 0;
	int j = 0;
	int min_val = 0;
	int new_min_idx = 0;
	
	for (i = 0; i < len; i++)
	{
		min_idx = i;

		for (j = (i + 1); j < len; j++)
		{	
			if (arr[min_idx] > arr [j])
			{
				min_idx = j;
			}
		}
		
		if (min_idx != i)
		{
			swap (&arr[min_idx], &arr[i]);
		}
	}

	return 0;
}
