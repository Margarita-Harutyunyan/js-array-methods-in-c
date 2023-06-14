#include <stdio.h>
#include <stdlib.h>

int includes(int* arr, int size, int elem) {
	int includes = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == elem) {
			includes = 1;
		}
	}
	return includes;
}


int main()
{
	int arr[] = {12, 45, 66, 32, 42};
	if (includes(arr, 5, 42)) {
		printf("True\n");
	} else {
		printf("False\n");
	}
}

