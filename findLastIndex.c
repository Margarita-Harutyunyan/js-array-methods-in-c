#include <stdio.h>
#include <stdlib.h>

int find(int* arr, int size, int (*callback)(int)) {
	int passed = -1;
	for (int i = 0; i < size; ++i) {
		if (callback(arr[i])) {
			passed = i;
		}
	}

	return passed;
}

int test(int num) {
	return(num % 3 == 0);
}

int main()
{
	int arr[] = { 2, 4, 6, 8, 9};
	int x = find(arr, 5, test);
	printf("%d\n", x);
}


