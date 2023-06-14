#include <stdio.h>
#include <stdlib.h>

int* map(int* arr, int size, int (*callback)(int))
{
	int* res = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; ++i) {
		res[i] = callback(arr[i]);
	}
	return res;
}

int sum(int num)
{
	return (num + 10);
}

int main()
{
	int arr[] = {12, 56, 78, 64};
	int* res = map(arr, 4, sum);
	
	for (int i = 0; i < 4; ++i) {
		printf("%d ", res[i]);
	}
	printf("\n");
	free(res);
}
