#include <stdio.h>
#include <stdlib.h>

int *removeDuplicates(int *p, int *size) {
    int *arr = (int *)calloc(sizeof(int), *size);
    int uniqueIndex = 0;
    for (int i = 0; i < *size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueIndex; j++) {
            if (p[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueIndex] = p[i];
            uniqueIndex++;
        }
    }
    arr = (int *) realloc(arr, uniqueIndex * sizeof(int));
    *size = uniqueIndex;
    return arr;
}
