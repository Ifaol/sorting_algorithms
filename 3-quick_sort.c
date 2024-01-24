#include "sort.h"
/**
 *swap - swaps two int values
 *@a: pointer to int input to be swapped
 *@b: pointer to int input to be swapped
 *
 *Return: void
 */
void swap(int *a, int *b)
{
int temp;
temp = *a, *a = *b, *b = temp;
}
/**
 *partition - Lomuto partition scheme function.
 *@array: pointer to array of int input.
 *@low: Starting index of the partition.
 *@high: Ending index of the partition.
 *@size: size of the array
 *
 *Return: index of the pivot element after partitioning.
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high], i = low - 1, j;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
swap(&array[i], &array[j]);
print_array(array, size);
}
}
swap(&array[i + 1], &array[high]);
print_array(array, size);
return (i + 1);
}
/**
 *quick_sort_recursive - performs QuickSort on a partitioned array.
 *@array: pointer to array of int input.
 *@low: Starting index of the partition.
  *@high: Ending index of the partition.
 *@size: size of the array
 *
 *Return: void
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int partition_index;
if (low < high)
{
partition_index = partition(array, low, high, size);
quick_sort_recursive(array, low, partition_index - 1, size);
quick_sort_recursive(array, partition_index + 1, high, size);
}
}
/**
 *quick_sort - call recursive function with initial parameters.
 *@array: pointer to array of int input.
 *@size: size of the array
 *
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
