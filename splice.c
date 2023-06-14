#include <stdio.h>
#include <stdlib.h>

int* splice(int** arr, int len, int start, int deleteCount, int* items, int itemsLen) {
	// making an array for removed elements
	int* removed = (int*)malloc(deleteCount * sizeof(int));
	if (removed == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}
		
	// making an array to collect the result
	int newSize = (len - deleteCount + itemsLen) * sizeof(int);
	int* res = (int*)malloc(newSize);
	if (res == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}

	// adding the elements till start to res
	int i = 0;
	for (i; i < start; ++i) {
		res[i] = (*arr)[i];
	}

	// adding the elements that are to be deleted to removed
	int j = 0;
	for (i; i < start + deleteCount; ++i) {
		removed[j] = (*arr)[i];
		++j;
	}
	// adding the new items to res
	int k = 0;
	int s = start;
	for(k; k < itemsLen; ++k) {
		res[s] = items[k];
		++s;
	}

	// adding the rest of the elements if present
	if(len > (start + deleteCount)) {
		int rest = start + deleteCount;
		for (rest; rest < len; ++rest) {
			res[s] = (*arr)[rest];
			++s;
		}
	}

	// assigning the result to our initial pointer and returning the removed elements
	*arr = res;
	return removed;
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
	int len = 6;
	int* arr = (int*)malloc(len * sizeof(int));
	for(int i = 0; i < len; ++i) {
		arr[i] = i + 1;
	}

	int start = 2;
	int deleteCount = 3;
	int items[] = {45, 66, 28, 42};
	int itemsLen = 4;

	printf("Before: ");
	traverse(arr, len);

	int* removed = splice(&arr, len, start, deleteCount, items, itemsLen);

	printf("After: ");
	traverse(arr, (len - deleteCount + itemsLen));
	printf("Removed: ");
	traverse(removed, deleteCount);

	free(arr);
	free(removed);
}

