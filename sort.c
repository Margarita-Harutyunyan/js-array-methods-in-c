#include <stdio.h>
#include <stdlib.h>

void sort(int* arr, int size)
{
	int tmp;
	int i = 0;
	for (int j = 0; j < size; ++j) {
		for (i; i < size; ++i) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		i = 0;
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
	int arr[] = {26, 5, 77, 23};
	sort(arr, 4);
	traverse(arr, 4);
}	
