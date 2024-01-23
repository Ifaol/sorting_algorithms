#include "sort.h"
/**
 *insertion_sort_list - Sort a d-linked list by Insertion sort algorithm
 *@list: Input list to be sorted.
 *
 *Return: void
 **/
void insertion_sort_list(listint_t **list)
{
listint_t *sor = NULL, *unsor = NULL, *temp = NULL;
if (list == NULL || (*list)->next == NULL)
{
return;
}
unsor = (*list)->next;
while (unsor != NULL)
{
sor = unsor->prev, temp = unsor->next;
while (sor != NULL)
{
if (unsor->n < sor->n)
{
sor = sor->prev;
if (unsor->next != NULL)
{
unsor->next->prev = unsor->prev;
}
unsor->prev->next = unsor->next;
unsor->prev = sor;
if (sor == NULL)
{
(*list)->prev = unsor;
unsor->next = *list;
*list = unsor;
}
else
{
sor->next->prev = unsor, unsor->next = sor->next;
sor->next = unsor;
}
print_list(*list);
}
else
{
break;
}
}
unsor = temp;
}
}
