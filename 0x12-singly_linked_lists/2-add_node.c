#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new1;
	unsigned int len = 0;

	while (str[len])
		len++;

	new1 = malloc(sizeof(list_t));
	if (!new1)
		return (NULL);

	new1->str = strdup(str);
	new1->len = len;
	new1->next = (*head);
	(*head) = new1;

	return (*head);
}
