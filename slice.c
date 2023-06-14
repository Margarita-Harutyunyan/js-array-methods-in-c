#include <stdio.h>
#include <stdlib.h>

int* slice(int* arr, int size, int start, int end)
{
	if (end > size) {
		end = size;
	}
	
	int slice = end - start;
	int* res = (int*)malloc(slice * sizeof(int));
	if (res == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}

	for(int i = 0; i < slice; ++i) {
		res[i] = arr[start];
		++start;
	}
	return res;
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
	int arr[] = {15, 56, 32, 42, 48, 74};
	int* sliced14 = slice(arr, 6, 1, 4);
	int* sliced27 = slice(arr, 6, 2, 7);

	printf("Sliced from 1 to 4: ");
	traverse(sliced14, 3);

	printf("Sliced from 2 to 7: ");
	traverse(sliced27, 4);
	
	free(sliced14);
	free(sliced27);
}
