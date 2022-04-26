#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list of elements
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
size_t number_of_nodes = 0;

while (h != NULL)
{
number_of_nodes += 1;
h = h->next;
}
return (number_of_nodes);
}
