#include <stdio.h>
#include "lcs.h"

/* Description:
 * - This function takes a reference to an array,
 * - array size, and
 * - reference to store the size of the LCS
 * - Using the insertion sort algorithm
 * - The function will search for the LCS in the array and
 * - stores its size
 * Return:
 * - returns -1 if the array is empty
 * - returns -2 if the array size is 0 or >10
 * - returns -3 if there is no LCS,
 * (i.e all array elements are not consecutive at all)
 * - returns 0 otherwise
 */
int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS)
{
    int8_t counter = 0;
    int8_t max = 0;

    if(arraySize == 0)
    {
        return -1;
    }

    if(arraySize > 10)
    {
        return -2;
    }

    insertionSort(array, arraySize);

    for(int32_t i=0; i<arraySize-1; i++)
    {
        if(array[i] == array[i+1]-1)
        {
            counter++;
            if(counter > max)
            {
                max = counter;
            }
        }
        else
        {
            counter = 0;
        }
    }

    if(max == 0)
    {
        return -3;
    }

    *sizeofLCS = max+1;
    return 0;
}

/* Description:
 * - This function tests lcsGetSize Function
 * Return:
 * - Nothing to return
 */
void LCSTestCases()
{
    printf("Test case 1: [9, 0, 7, 5, 3, 8, -10, 4, 2, 1]");
    int32_t arr1[] = {9, 0, 7, 5, 3, 8, -10, 4, 2, 1};
    int8_t LCS1;
    int8_t result1 = lcsGetSize(arr1, 10, &LCS1);
    if(result1 == -1)
    {
        printf("\nArray is empty\n");
    }
    else if (result1 == -2)
    {
        printf("\nArray size is > 10\n");
    }
    else if (result1 == -3)
    {
        printf("\nThere is no LCS\n");
    }
    else
    {
        printf("\nLCS = %d\n", LCS1);
    }
    printf("=========================================================================\n");

    printf("Test case 2: Empty array");
    int32_t arr2[] = {};
    int8_t LCS2;
    int8_t result2 = lcsGetSize(arr2, 0, &LCS2);
    if(result2 == -1)
    {
        printf("\nArray is empty\n");
    }
    else if (result2 == -2)
    {
        printf("\nArray size is > 10\n");
    }
    else if (result2 == -3)
    {
        printf("\nThere is no LCS\n");
    }
    else
    {
        printf("\nLCS = %d\n", LCS2);
    }
    printf("=========================================================================\n");

    printf("Test case 3: [9, 0, 7, 5, 3, 8, -10, 4, 2, 1, 6, 12]");
    int32_t arr3[] = {9, 0, 7, 5, 3, 8, -10, 4, 2, 1, 6, 12};
    int8_t LCS3;
    int8_t result3 = lcsGetSize(arr3, 12, &LCS3);
    if(result3 == -1)
    {
        printf("\nArray is empty\n");
    }
    else if (result3 == -2)
    {
        printf("\nArray size is > 10\n");
    }
    else if (result3 == -3)
    {
        printf("\nThere is no LCS\n");
    }
    else
    {
        printf("\nLCS = %d\n", LCS3);
    }
    printf("=========================================================================\n");

    printf("Test case 4: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]");
    int32_t arr4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int8_t LCS4;
    int8_t result4 = lcsGetSize(arr4, 10, &LCS4);
    if(result4 == -1)
    {
        printf("\nArray is empty\n");
    }
    else if (result4 == -2)
    {
        printf("\nArray size is > 10\n");
    }
    else if (result4 == -3)
    {
        printf("\nThere is no LCS\n");
    }
    else
    {
        printf("\nLCS = %d\n", LCS4);
    }
    printf("=========================================================================\n");

    printf("Test case 5: [2, 8, 4, 10, 6, 20, 16, 12, 14, 16]");
    int32_t arr5[] = {2, 8, 4, 10, 6, 20, 16, 12, 14, 16};
    int8_t LCS5;
    int8_t result5 = lcsGetSize(arr5, 10, &LCS5);
    if(result5 == -1)
    {
        printf("\nArray is empty\n");
    }
    else if (result5 == -2)
    {
        printf("\nArray size is > 10\n");
    }
    else if (result5 == -3)
    {
        printf("\nThere is no LCS\n");
    }
    else
    {
        printf("\nLCS = %d\n", LCS5);
    }
    printf("=========================================================================\n");


}