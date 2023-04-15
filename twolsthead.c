#include "push_swap.h"

t_twoway_list	*twolsthead(t_twoway_list *node)
{
	while (node->previous)
		node = node->previous;
	return (node);
}
