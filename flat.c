#include <stdio.h>
#include <stdlib.h>

int* flat(int arr[][3], int rows) {
	int* flattened = (int*)malloc(rows * 3 * sizeof(int));
	if (flattened == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}
	

	int f = 0;
	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < 3; ++j) {
			flattened[f] = arr[i][j];
			++f;
		}
	}
	return flattened;
}

int main()
{
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6},
	};
	
	int* flattened = flat(arr, 2);
	int len = 6;
	for (int i = 0; i < len; ++i) {
		printf("%d ", flattened[i]);
	}
	printf("\n");
	free(flattened);
}
