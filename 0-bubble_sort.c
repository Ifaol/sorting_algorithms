#include "sort.h"
/**
 *bubble_sort - a bubble sort function
 *@array: array input to be sorted
 *@size: size of the array
 *
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
int i, j;
bool is_swapped;
for (i = 0 ; i < n - 1 ; i++)
{
is_swapped = false;
for (j = 0 ; j < n - i - 1 ; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
is_swapped = true;
}
}
if (is_swapped == false)
break;
}
}