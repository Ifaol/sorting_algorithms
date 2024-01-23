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
size_t i, start, end;
bool is_swapped;
if (array == NULL || size < 2)
{
return;
}
start = 0;
end = size - 1;
do {
is_swapped = false;
for (i = start; i < end; i++)
{
if (array[i] > array[i + 1])
{
array[i] ^= array[i + 1];
array[i + 1] ^= array[i];
array[i] ^= array[i + 1];
print_array(array, size);
is_swapped = true;
}
}
if (!is_swapped)
{
break;
}
is_swapped = false;
end--;
for (i = end; i > start; i--)
{
if (array[i] < array[i - 1])
{
array[i] ^= array[i - 1];
array[i - 1] ^= array[i];
array[i] ^= array[i - 1];
print_array(array, size);
is_swapped = true;
}
}
start++;
} while (is_swapped);
}
