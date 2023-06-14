#include <stdio.h>
#include <stdlib.h>

int lastIndexOf(int* arr, int size, int elem, int fromIndex)
{
        int index = -1;
        for (int i = fromIndex; i < size; ++i) {
                if (arr[i] == elem) {
                        index = i;
                }
        }

        return index;
}


int main()
{
        int arr[] = {1, 2, 3, 4, 2, 4, 4};
        int found1 = lastIndexOf(arr, 7, 2, 0);
        int found2 = lastIndexOf(arr, 7, 4, 4);

        printf("Found 2 at index %d, found 4 at index  %d\n", found1, found2);
} 
