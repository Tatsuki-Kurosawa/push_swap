#include "../push_swap.h"

void	twolstclear(t_twoway_list **twolst)
{
	t_twoway_list	*node;

	node = *twolst;
	while (node->previous)
	{
		*twolst = node->previous;
		free();
		node = *twolst;
	}
	
	return (NULL);
}
