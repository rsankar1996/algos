#include <stdlib.h>
#include <stdio.h>
#include "linear.h"

int search (int * arr, int len, int key)
{
	int result = -1;
	int i = 0;
	
	printf("DBG: Linear search\r\n");

	if ((NULL == arr) || (0 == len))
	{
		return result;
	}
	
	for (i = 0; i < len; i++)
	{
		if (key == arr[i])
		{
			result = i;
			break;
		}
	}
	
	return result;
}
