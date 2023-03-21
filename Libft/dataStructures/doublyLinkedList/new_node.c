#include "libft.h"

t_node	*new_node(int data)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->data = data;
	return (node);
}
