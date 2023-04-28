/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:27:32 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 17:40:03 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_sa_ra(t_twoway_list **stack)
{
	sa(stack);
	ra(stack);
	return ;
}

static void	sort_sa_rra(t_twoway_list **stack)
{
	sa(stack);
	rra(stack);
	return ;
}

static void	sort(t_twoway_list **stack, int cont_1, int cont_2, int cont_3)
{
	if (cont_1 < cont_2)
	{
		if (cont_2 < cont_3)
			tohead(stack);
		else if (cont_1 < cont_3 && cont_3 < cont_2)
			sort_sa_ra(stack);
		else if (cont_3 < cont_1 && cont_1 < cont_2)
			rra(stack);
	}
	else if (cont_2 < cont_1)
	{
		if (cont_1 < cont_3)
			sa(stack);
		else if (cont_2 < cont_3 && cont_3 < cont_1)
			ra(stack);
		else if (cont_3 < cont_2 && cont_2 < cont_1)
			sort_sa_rra(stack);
	}
	return ;
}

// stackのさすノードが番兵の次のノードであることが前提の処理
void	three_arguments(t_twoway_list **stack)
{
	int				content_1;
	int				content_2;
	int				content_3;

	tohead(stack);
	content_1 = (*stack)->content;
	(*stack) = (*stack)->next;
	content_2 = (*stack)->content;
	(*stack) = (*stack)->next;
	content_3 = (*stack)->content;
	sort(stack, content_1, content_2, content_3);
	return ;
}
