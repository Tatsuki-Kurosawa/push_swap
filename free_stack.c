#include "push_swap.h"

void	free_stack(t_twoway_list **stack)
{
	t_twoway_list	*buf;

	tohead(stack);
	while ((*stack)->guard == 0)
	{
		buf = (*stack)->next;
		free(*stack);
		*stack = buf;
	}
	free(*stack);
	return ;
}
