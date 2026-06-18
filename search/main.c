#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
//#include "linear.h"

int main()
{
	int db[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int key1 = 10;
	int key2 = 20;
	int key3 = 8;
	int result = 0;
	int len = sizeof (db) / sizeof (db[0]);
	int i = 0;
	
	for (i = 0; i < len; i++)
	{
		printf("%d ", db[i]);
	}
	printf("\r\n");
	
	result = search (db, len, key1);
	if  (-1 == result)
	{
		printf ("%d not found in db\r\n", key1);
	}
	else
	{
		printf("%d found at index %d\r\n", key1, result);
	}

	result = search (db, len, key2);
	if  (-1 == result)
	{
		printf ("%d not found in db\r\n", key2);
	}
	else
	{
		printf("%d found at index %d\r\n", key2, result);
	}
	
	result = search (db, len, key3);
	if  (-1 == result)
	{
		printf ("%d not found in db\r\n", key3);
	}
	else
	{
		printf("%d found at index %d\r\n", key3, result);
	}
	return 0;
}
