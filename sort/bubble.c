#include <stdio.h>
#include "bubble.h"

void swap (int * a, int * b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}

int sort (int * arr, int len)
{
	int i = 0;
	int j = 0;
	
	if (NULL == arr)
	{
		return -1;
	}
	
	if (0 == len)
	{
		return -1;
	}
	
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < (len - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap (&arr[j], &arr[j + 1]);
			}
		}
	}

	return 0;
}
