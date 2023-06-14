#include <stdio.h>
#include <stdlib.h>

void with(int* arr, int size, int index, int value) {
	if (index < 0 | index > size) {
		printf("Index out of range");
		return;
	}

	arr[index] = value;
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
	int arr[] = {1, 2, 3, 4, 5};
	printf("Before using with: ");
	traverse(arr, 5);
	
	with(arr, 5, 2, 42);
	printf("After using with: ");
	traverse(arr,5);
}
