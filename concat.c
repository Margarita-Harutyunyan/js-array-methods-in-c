#include <stdio.h>
#include <stdlib.h>

int* concat(int* arr1, int len1, int* arr2, int len2)
{
	int len = len1 + len2;
	int* arr = (int*)malloc(len * sizeof(int));
	if (arr == NULL){
		printf("Failed to allocate memory");
		return NULL;
	}

	int k = 0;

	for (int i = 0; i < len1; ++i){
		arr[k] = arr1[i];
		++k;
	}

	for (int j = 0; j < len2; ++j){
		arr[k] = arr2[j];
		++k;
	}

	return arr;
}

int main()
{
	int arr1[] = {1, 2, 3};
	int arr2[] = {4, 5, 6, 7};
	int* arr3 = concat(arr1, 3, arr2, 4);
	
	for (int i = 0; i < 7; ++i){
		printf("%d ", arr3[i]);
	}
	printf("\n");
	free(arr3);
}
