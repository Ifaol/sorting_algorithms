#include "sort.h"
/**
 *swap - a swap two values function
 *@x: int pointer input
 *@y: int pointer input
 *
 *Return: void
 */
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
