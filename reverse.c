#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr, int size)
{	
	int l = 0;
	int r = size - 1;
	int tmp;
	for(l; l < (size / 2); ++l) {
		tmp = arr[l];
		arr[l] = arr[r];
		arr[r] = tmp;
		--r;
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
	int arr[] = {11, 22, 33, 44, 55, 66};
	printf("Before: ");
	traverse(arr, 6);
	
	reverse(arr, 6);
	printf("After: ");
	traverse(arr, 6);
}
