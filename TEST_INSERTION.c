#include "sort.h"

/**
 * add_node - Add node to a list.
 * @node_int: Position to Add.
 * @my_node: The node to Add
 * Return: Address of a Node.
 */

listint_t *add_node(listint_t *node_int, listint_t *my_node)
{
	if (node_int->n < my_node->n && node_int->prev != NULL)
	{
		my_node->prev = node_int;
		my_node->next = node_int->next;
		node_int->next = my_node;
		my_node->next->prev = my_node;
	}
	else if (node_int->n < my_node->n && node_int->prev == NULL)
	{
		my_node->prev = node_int;
		my_node->next = node_int->next;
		node_int->next = my_node;
		my_node->next->prev = my_node;
	}
	else
	{
		my_node->prev = NULL;
		my_node->next = node_int;
		node_int->prev = my_node;
	}
	return (my_node);
}

/**
 * pop_node - remove a node from a list.
 * @node_int: Node to remove.
 * Return: Address of a Node.
 */

listint_t *pop_node(listint_t *node_int)
{
	if (node_int->next != NULL)
	{
		node_int->prev->next = node_int->next;
		node_int->next->prev = node_int->prev;
		node_int->prev = NULL;
		node_int->next = NULL;
	}
	else
	{
		node_int->prev->next = NULL;
		node_int->prev = NULL;
		node_int->next = NULL;
	}
	return (node_int);
}

/**
 * insertion_sort_list - Sort a Doubly linked list.
 * @list: A Doubly linked list.
 * Return: Always 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *h, *flying_node, *tmp;

	if ((list != NULL) && (*list != NULL))
	{
		h = *list;
		while (h->next)
		{
			if (h->n > h->next->n)
			{
				flying_node = pop_node(h->next);
				tmp = h;
				while (tmp != NULL)
				{
					if (flying_node->n > tmp->n)
					{
						h = add_node(tmp, flying_node);
						print_list(*list);
						break;
					}
					else if ((flying_node->n < tmp->n) && tmp->prev == NULL)
					{
						*list = add_node(tmp, flying_node);
						print_list(*list);
						break;
					}
					tmp = tmp->prev;
				}
				h = h->prev;
			}
			h = h->next;
		}
	}
}
