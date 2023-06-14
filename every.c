#include <stdio.h>

int every(int* arr, int size, int(*callback)(int num)){
	int every = 1;
	for (int i = 0; i < size; ++i){
		if (callback(arr[i]) == 0) {
			every = 0;
		}
	}

	return every;
}


int isEven(int num){
	return (num % 2 == 0);
}


int main()
{
	int arr1[] = {2, 4, 6};
	
	if (every(arr1, 3, isEven)) {
		printf("True\n");
	} else {
		printf("False\n");
	}
}
