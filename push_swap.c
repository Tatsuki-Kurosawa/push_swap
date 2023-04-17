/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:39:07 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 02:03:55 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	compare_two_value(t_twoway_list **stacka)
{
	t_twoway_list	*node;
	int				content_1;
	int				content_2;
	int				check;

	node = *stacka;
	content_1 = node->content;
	node = node->next;
	content_2 = node->content;
	if (content_1 > content_2)
		check = 1;
	else
		check = 0;
	return (check);
}

void	push_swap(int quantity, t_twoway_list **stack_a)
{
	t_twoway_list	*stack_b;
	int				num_of_int;

	num_of_int = quantity - 1;
	if (num_of_int == 1)
		return ;
	else if (num_of_int == 2)
	{
		if (compare_two_value(stack_a) == 1)
			sa(stack_a);
	}
	else if (num_of_int == 3)
	{
		stack_b = NULL;
		printf("stack_b: %p\n", stack_b);
		three_arguments(stack_a);
	}
	else
	{
	}
	return ;
}
