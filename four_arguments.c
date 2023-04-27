/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:32:28 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 16:42:15 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_twoway_list **stack_a, t_twoway_list **stack_b, int index)
{
	if (index == 1)
		sa(stack_a);
	else if (index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	three_arguments(stack_a);
	pa(stack_a, stack_b);
}

static int	find_smallest_node(t_twoway_list **stack_a)
{
	t_twoway_list	*node;
	int				smallest_content;
	int				smallest_index;
	int				i;

	node = *stack_a;
	smallest_content = node->content;
	i = 0;
	while (node->guard == 0)
	{
		if (node->content < smallest_content)
		{
			smallest_content = node->content;
			smallest_index = i;
		}
		node = node->next;
		i++;
	}
	return (smallest_index);
}

void	four_arguments(t_twoway_list **stack_a, t_twoway_list **stack_b)
{
	int	index;

	tohead(stack_a);
	index = find_smallest_node(stack_a);
	sort(stack_a, stack_b, index);
}

// stack_bがあること前提でoperation関数は動いている、そのため、syack_bを用意しておく必要がある