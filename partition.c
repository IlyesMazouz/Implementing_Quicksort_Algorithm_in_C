#include "main.h"

// partitioning the array and returning the index of the pivot

int partition(int array[], int left, int right)
{
    int pivot = array[right];
    int smaller_integer = (left - 1);
    for (int current_integer = left; current_integer <= right - 1; current_integer++)
    {
        if (array[current_integer] <= pivot)
        {
            smaller_integer++;
            swap(&array[smaller_integer], &array[current_integer]);
        }
    }
    swap(&array[smaller_integer + 1], &array[right]);
    return (smaller_integer + 1);
}