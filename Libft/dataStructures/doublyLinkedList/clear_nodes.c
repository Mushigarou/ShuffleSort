#include "libft.h"

void	clear_node(t_node **head)
{
	t_node	*tmp;

	if (!head || !(*head))
		return ;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
	return ;
}
