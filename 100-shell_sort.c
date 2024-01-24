#include "sort.h"
/**
 *shell_sort - sorts array using shell sort algorithm.
 *@array: pointer to array of ints input
 *@size: size of the array
 *
 *Return: none
 */
void shell_sort(int *array, size_t size)
{
size_t interval = 1, i, j;
int temp;
if (array == NULL || size < 2)
{
return;
}
while (interval <= size / 3)
{
interval = interval * 3 + 1;
}
while (interval > 0)
{
for (i = interval ; i < size ; i++)
{
temp = array[i];
for (j = i ; j >= interval && array[j - interval] > temp ; j -= interval)
{
array[j] = array[j - interval];
}
array[j] = temp;
}
print_array(array, size);
interval = (interval - 1) / 3;
}
}
