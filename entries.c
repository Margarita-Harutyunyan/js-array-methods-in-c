#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int key;
	int value;
} Entry;

Entry* entries(int* arr, int size) {
	Entry* iterator = (Entry*)malloc(size * sizeof(Entry));
	if (iterator == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}
	for (int i = 0; i < size; ++i) {
		iterator[i].key = i;
		iterator[i].value = arr[i];
	}
	return iterator;
}

void printEntry(Entry entry) {
	printf("%d  %d\n", entry.key, entry.value);
}

int main()
{
	int arr[] = {42, 23, 24, 66};
	Entry* iterator = entries(arr, 4);
	for (int i = 0; i < 4; ++i) {
		printEntry(iterator[i]);
	}
	free(iterator);
}
