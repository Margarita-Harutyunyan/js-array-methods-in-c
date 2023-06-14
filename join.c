#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(int* arr, int size, char* separator) {
	int initSize = size * 3 + (size - 1) * strlen(separator) + 1;
	char* res = (char*)malloc(initSize);
	if (res == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}

	char* buffer = (char*)malloc(4);
	if (buffer == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}
	
	int i = 0;
	while (i < (size - 1)) {
		sprintf(buffer, "%d", arr[i]);
		strcat(res, buffer);
		strcat(res, separator);
		++i;
	}

	sprintf(buffer, "%d", arr[i]);
	strcat(res, buffer);

	if (initSize > strlen(res)) {
		char* trim = (char*)realloc(res, (strlen(res) + 1));
		if (trim == NULL) {
			printf("Failed to reallocate memory\n");
			return NULL;
		}
		res = trim;
	}
	return res;
}

int main()
{
	int arr[] = {1, 23, 34, 45};
	char* str = join(arr, 4, "//");
	printf("%s\n", str);
	free(str);
}


