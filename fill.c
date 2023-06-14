#include <stdio.h>
#include <stdlib.h>

void fill(int* arr, int size, int start, int end, int value) {
	if (end > size) {
		end = size;
	}

	for (start; start < end; ++start) {
		arr[start] = value;
	}
}


void traverse(int*arr, int size)
{
	for (int i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {12, 25, 36, 57, 48, 33};
	fill(arr, 6, 2, 5, 400);
	traverse(arr, 6);
}
