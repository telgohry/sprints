#include <stdio.h>
#include "sort.h"

// Functions Implementation
/* Description:
 * - This function takes a reference to an array of integers
 * - Sorts the array in ascending order
 * - Using the insertion sort algorithm
 * Return:
 * - returns -1 if the array is empty
 * - returns -2 if the array size is 0 or >10
 * - returns 0 if sorting is done without errors
 */
int8_t insertionSort(int32_t *array, uint8_t arraySize)
{
    int32_t temp;
    int32_t j;

    for(int32_t i=1; i<arraySize; i++)
    {
        j = i-1;
        temp = array[i];

        while(j>-1 && array[j]>temp)
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }
}

/* Description:
 * - This function takes a reference to an array of integers
 * - Prints all array elements
 * Return:
 * - Nothing to return
 */
void printArray(int32_t *array, uint8_t arraySize)
{
    printf("\n");
    for(int32_t i=0; i<arraySize; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

/* Description:
 * - This function tests insertionSort Function
 * Return:
 * - Nothing to return
 */
void SortingTestCases()
{
    printf("Test case 1: [9, 0, 7, 5, 3, 8, -10, 4, 2, 1]\n");
    int32_t arr1[]= {9, 0, 7, 5, 3, 8, -10, 4, 2, 1};
    insertionSort(arr1,10);
    printArray(arr1,10);
    printf("=========================================================================\n");

    printf("Test case 2: Empty array\n");
    int32_t arr2[] = {0};
    insertionSort(arr2,0);
    printArray(arr2,0);
    printf("=========================================================================\n");

    printf("Test case 3: [9, 0, 7, 5, 3, 8, -10, 4, 2, 1, 6, 12]\n");
    int32_t arr3[] = {9, 0, 7, 5, 3, 8, -10, 4, 2, 1, 6, 12};
    insertionSort(arr3,12);
    printArray(arr3,12);
    printf("=========================================================================\n");

    printf("Test case 4: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n");
    int32_t arr4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    insertionSort(arr4,10);
    printArray(arr4,10);
    printf("=========================================================================\n");
}
