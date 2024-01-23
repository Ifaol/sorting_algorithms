#include "sort.h"
/**
 *selection_sort - sorts an array using the Selection Sort algorithm
 *
 *@arr: The array to be sorted.
 *@n: The size of the array.
 *
 *Return: void
 */
void selection_sort(int *arr, size_t n)
{
size_t min_index = 0;
size_t pass = 0, index = 0;
size_t passes_required = 0;
int temp = 0;
if (arr == NULL || n < 2)
{
return;
}
passes_required = n - 1;
for (pass = 0; pass < passes_required; pass++)
{
min_index = pass;
for (index = pass + 1; index < n; index++)
{
if (arr[index] < arr[min_index])
{
min_index = index;
}
}
temp = arr[pass];
arr[pass] = arr[min_index];
arr[min_index] = temp;
if (min_index > pass)
{
print_array(arr, n);
}
}
}
