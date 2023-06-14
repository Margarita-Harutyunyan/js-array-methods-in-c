#include <stdio.h>
#include <stdlib.h>

int reduce(int* arr, int size, int (*callback)(int, int), int start)
{	
	int res = start;
	for (int i = 0; i < size; ++i){
		res = callback(res, arr[i]);
	}
	return res;
}

int sum(int m, int n)
{
	return (m + n);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res = reduce(arr, 10, sum, 0);
	printf("%d\n", res);
}
