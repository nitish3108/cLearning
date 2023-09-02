#include <stdio.h>

int findSecondLargest(int *arr, int size) {
    int largest = arr[0], secondLargest=0;
    for(int i=1; i < size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
