/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:27:32 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 11:58:22 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_sa_ra(t_twoway_list **stack_a)
{
	sa(stack_a);
	ra(stack_a);
	return ;
}

static void	sort_sa_rra(t_twoway_list **stack_a)
{
	sa(stack_a);
	rra(stack_a);
	return ;
}

static void	sort(t_twoway_list **stack_a, int cont_1, int cont_2, int cont_3)
{
	if (cont_1 < cont_2)
	{
		if (cont_2 < cont_3)
			return ;
		else if (cont_1 < cont_3 && cont_3 < cont_2)
			sort_sa_ra(stack_a);
		else if (cont_3 < cont_1 && cont_1 < cont_2)
			rra(stack_a);
	}
	else if (cont_2 < cont_1)
	{
		if (cont_1 < cont_3)
			sa(stack_a);
		else if (cont_2 < cont_3 && cont_3 < cont_1)
			ra(stack_a);
		else if (cont_3 < cont_2 && cont_2 < cont_1)
			sort_sa_rra(stack_a);
	}
	return ;
}

void	three_arguments(t_twoway_list **stack_a)
{
	int				content_1;
	int				content_2;
	int				content_3;

	content_1 = (*stack_a)->content;
	(*stack_a) = (*stack_a)->next;
	content_2 = (*stack_a)->content;
	(*stack_a) = (*stack_a)->next;
	content_3 = (*stack_a)->content;
	sort(stack_a, content_1, content_2, content_3);
	return ;
}
