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
size_t i, j;
int temp;
bool is_swapped;
if (array == NULL || size < 2)
{
return;
}
for (i = 0 ; i < size - 1 ; i++)
{
is_swapped = false;
for (j = 0 ; j < size - i - 1 || j + 1 != size ; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
is_swapped = true;
}
}
if (!is_swapped)
break;
}
}
