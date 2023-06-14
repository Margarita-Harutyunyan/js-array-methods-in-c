#include <stdio.h>
#include <stdlib.h>

int* filter(int* arr, int size, int (*callback)(int)){
	int* new = (int*)malloc(size * sizeof(int));
	if (new == NULL) {
		printf("Failed to allocate memory\n");
		return NULL;
	}

	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (callback(arr[i])) {
			new[j] = arr[i];
			++j;
		}
	}
	int* trim = (int*)realloc(new, j * sizeof(int));
	if (trim == NULL) {
		printf("Failed to reallocate memory\n");
		return NULL;
	}
	return trim;
	
}


int isEven(int num){
	return (num % 2 == 0);
}

int main(){
	int* res;
	int arr[] = {1, 2, 3, 4};
	res = filter(arr, 4, isEven);
	for (int i = 0; i < 2; ++i){
		printf("%d\n", *(res + i));
	}
	free(res);
}

	

