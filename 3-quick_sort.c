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
 *partition: - Lomuto partition scheme function.
 *@array: pointer to array of int input.
 *@low: Starting index of the partition.
  *@high: Ending index of the partition.
 *
 *Return: index of the pivot element after partitioning.
 */
int partition(int *array, int low, int high)
{
int pivot = array[high], i = low - 1, j;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
swap(&array[i], &array[j]);
print_array(array, high + 1);
}
}
swap(&array[i + 1], &array[high]);
print_array(array, high + 1);
return (i + 1);
}
/**
 *quick_sort_recursive - performs QuickSort on a partitioned array.
 *@array: pointer to array of int input.
 *@low: Starting index of the partition.
  *@high: Ending index of the partition.
 *
 *Return: void
 */
void quick_sort_recursive(int *array, int low, int high)
{
int partition_index;
if (low < high)
{
partition_index = partition(array, low, high);
quick_sort_recursive(array, low, partition_index - 1);
quick_sort_recursive(array, partition_index + 1, high);
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
quick_sort_recursive(array, 0, size - 1);
}
