#include "main.h"

// performing the QuickSort Algorithm

void quicksort(int array[], int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(array, left, right);
        quicksort(array, left, pivotIndex - 1);
        quicksort(array, pivotIndex + 1, right);
    }
}