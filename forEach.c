#include <stdio.h>
#include <stdlib.h>

void forEach(int* arr, int size, void (*callback)(int))
{
	for (int i = 0; i < size; ++i) {
		callback(arr[i]);
	}
}


void multiply(int num)
{
	int res = num * 2;
	printf("%d\n", res);
}



int main()
{
	int arr[] = {1, 2, 3, 4};
	forEach(arr, 4, multiply);
}
