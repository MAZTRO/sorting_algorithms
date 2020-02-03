#include "sort.h"

/**
 * swap_node_2 - Add node to a list.
 * @my_node: The node to Add
 * @list: To print.
 * Return: Address of a Node.
 */

listint_t *swap_node_2(listint_t *my_node, listint_t *list)
{
	my_node->next->prev = NULL;
	my_node->prev = my_node->next;
	my_node->next = NULL;
	my_node->prev->next = my_node;
	list = my_node->prev;
	print_list(list);
	return (list);
}

/**
 * swap_node_init - Add node to a list.
 * @my_node: The node to Add
 * Return: Address of a Node.
 */

void swap_node_init(listint_t *my_node)
{
	my_node->next->prev = NULL;
	my_node->next->next->prev = my_node;
	my_node->prev = my_node->next;
	my_node->next = my_node->next->next;
	my_node->prev->next = my_node;
}

/**
 * swap_node_med - Add node to a list.
 * @my_node: The node to Add
 * Return: Address of a Node.
 */

void swap_node_med(listint_t *my_node)
{
	my_node->next->next->prev = my_node;
	my_node->next->prev = my_node->prev;
	my_node->prev = my_node->next;
	my_node->next = my_node->next->next;
	my_node->prev->prev->next = my_node->prev;
	my_node->prev->next = my_node;
}

/**
 * swap_node_fin - Add node to a list.
 * @my_node: The node to Add
 * Return: Address of a Node.
 */

void swap_node_fin(listint_t *my_node)
{
	my_node->next->prev = my_node->prev;
	my_node->prev = my_node->next;
	my_node->next = NULL;
	my_node->prev->prev->next = my_node->prev;
	my_node->prev->next = my_node;
}
/**
 * insertion_sort_list - Sort a Doubly linked list.
 * @list: A Doubly linked list.
 * Return: Always 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *h, *tmp;

	if ((list != NULL) && (*list != NULL))
	{
		h = *list;
		h = h->next;
		tmp = h;
		while (h != NULL)
		{
			while (tmp != NULL)
			{
				if ((tmp->n > h->n) && tmp->prev == NULL && h->next == NULL)
				{
					*list = swap_node_2(tmp, *list);
					h = tmp;
				}
				if ((tmp->n > h->n) && tmp->prev == NULL)
				{
					swap_node_init(tmp);
					*list = tmp->prev;
					h = tmp;
					print_list(*list);
				}
				if ((tmp->n > h->n) && tmp->prev != NULL)
				{
					if ((tmp->n > h->n) && h->next == NULL)
					{swap_node_fin(tmp), print_list(*list); }
					else
					{swap_node_med(tmp), print_list(*list); }
				}
				tmp = tmp->prev;
			}
			h = h->next;
			tmp = h;
		}
	}
}
