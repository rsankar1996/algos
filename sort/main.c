#include <stdio.h>
#include "bubble.h"

int main()
{
	int arr[] = {3, 1, 2, 5, 4};
	int len = sizeof (arr) / sizeof (arr[0]);
	int i = 0;
	
	printf("Unsorted array: ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\r\n");

	sort(arr, len);

	printf("Sorted array: ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\r\n");
	
	return 0;
}
