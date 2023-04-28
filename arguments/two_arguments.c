/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:38:40 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 18:00:17 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	two_arguments(t_twoway_list **stack)
{
	int	content_1;
	int	content_2;

	tohead(stack);
	content_1 = (*stack)->content;
	*stack = (*stack)->next;
	content_2 = (*stack)->content;
	if (content_1 > content_2)
		sa(stack);
	else
		tohead(stack);
	return ;
}
