#include "push_swap.h"

void	err_msg(int status)
{
	write(2, "Error\n", 7);
	exit(status);
}

void	free_stacks(t_data *data)
{
	clear_node(&data->s_a->head);
	clear_node(&data->s_b->head);
	free(data->s_a);
	free(data->s_b);
	return ;
}
