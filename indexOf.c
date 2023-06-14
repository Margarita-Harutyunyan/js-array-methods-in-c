#include <stdio.h>
#include <stdlib.h>

int indexOf(int* arr, int size, int elem)
{
	int index = -1;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == elem) {
			index = i;
			break;
		}
	}

	return index;
}


int main()
{
	int arr[] = {1, 2, 3, 4};
	int found = indexOf(arr, 4, 4);
	int notfound = indexOf(arr, 4, 17);

	printf("Found 4 at index %d, did not find 17, return value is %d\n", found, notfound);
}
