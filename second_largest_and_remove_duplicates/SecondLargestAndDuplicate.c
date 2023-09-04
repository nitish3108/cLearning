#include<stdio.h>
#include "findSecondLargest.h"
#include "removeDuplicate.h"
int main()
{
    int arr[] = {9,8,5,3,9,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);
    printf("2nd Largest: %d\n", secondLargest);
    int *p = removeDuplicates(arr, &size);
    for(int i=0; i < size; i++)
    {
    	printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}
