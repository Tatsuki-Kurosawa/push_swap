/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_front_withguard.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:37:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 16:45:06 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstadd_front_withguard(t_twoway_list **head, t_twoway_list *new)
{
	t_twoway_list	*guard_node;

	if (!head || !new)
		return ;
	if (!*head)
		*head = new;
	else
	{
		guard_node = (*head)->previous;
		(*head)->previous = new;
		guard_node->next = new;
		new->previous = guard_node;
		new->next = (*head);
		*head = new;
	}
	return ;
}
