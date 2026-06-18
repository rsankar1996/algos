#include <stdlib.h>
#include "binary.h"

int search (int * arr, int len, int key)
{
	int result = -1;
	int low = 0;
	int high = (len - 1);
	int mid = (low + high) / 2;
	
	if ((NULL == arr) || (0 == len))
	{
		return result;
	}
	
	while (low <= high)
	{
		if (key == arr[mid])
		{
			result = mid;
			break;
		}
		else if (key > arr[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		
		mid = (low + high) / 2;
	}
	
	return result;
}
