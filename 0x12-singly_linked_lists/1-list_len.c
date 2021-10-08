#include "lists.h"
/**
 * list_len - counts number of elements of the linked list h
 *@h: pointer to our linked list
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int count;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (0);
temp = h;
count  = 0;
while (temp != NULL)
{
temp  = temp->next;
count++;
}
return (count);
}
