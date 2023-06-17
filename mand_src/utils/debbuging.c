#include "push_swap.h"

void	print_stacks(t_data data)
{
	t_node	*tmp;

	tmp = data.s_a->head;
	ft_printf("\n\033[1;31mSTACK_A: \033[0m");
	while (tmp)
	{
		ft_printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	ft_printf("\n\n");
	ft_printf("\033[1;32mSTACK_B: \033[0m");
	tmp = data.s_b->head;
	while (tmp)
	{
		ft_printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	ft_printf("\n\n");
	return ;
}
