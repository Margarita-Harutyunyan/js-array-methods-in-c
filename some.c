#include <stdio.h>
#include <stdlib.h>

int some(int* arr, int size, int (*callback)(int))
{
	int some = 0;
	for (int i = 0; i < size; ++i) {
		if (callback(arr[i])) {
			some = 1;
			break;
		}
	}
	return some;
}

int isEven(int num)
{
	return (num % 2 == 0);
}


int main()
{
	int arr[] = {24, 65, 55};
	if (some(arr, 3, isEven)) {
		printf("True\n");
	} else {
		printf("False\n");
	}
}
