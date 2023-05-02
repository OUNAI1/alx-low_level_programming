#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *no;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!no)
		return (NULL);

	no->n = n;
	no->next = NULL;

	if (*head == NULL)
	{
		*head = no;
		return (no);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = no;

	return (new);
}
