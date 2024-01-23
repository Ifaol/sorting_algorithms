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
int temp;
bool is_swapped;
size_t left = 0, i, right = size - 1;
if (array == NULL || size < 2)
{
return;
}
while (left < right && is_swapped)
{
is_swapped = false;
for (i = left ; i < right ; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
is_swapped = true;
print_array(array, size);
}
}
if (!is_swapped)
{
break;
}
right--;
for (i = right ; i > left ; i--)
{
if (array[i] < array[i - 1])
{
temp = array[i];
array[i] = array[i - 1];
array[i - 1] = temp;
is_swapped = true;
print_array(array, size);
}
}
left++;
}
}
