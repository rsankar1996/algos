#include <stdlib.h>
#include <stdio.h>
#include "insert.h"

int sort (int * arr, int len)
{
	int i = 0;
	int j = 0;
	int key = 0;
	int sort_idx = 0;

	if ((NULL == arr) || (0 == len))
	{
		return - 1;
	}

	for (i = 1; i < len; i++)
	{
		key = arr[i];
		sort_idx = i - 1;
		
		while ((sort_idx >= 0) && (arr[sort_idx] > key))
		{
			arr[sort_idx + 1] = arr[sort_idx];
			sort_idx--;
		}
		
		arr[sort_idx + 1]  = key;
	}
	
	return 0;
}
