/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_back_withguard.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:33:07 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 18:37:50 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstadd_back_withguard(t_twoway_list **head, t_twoway_list *new)
{
	t_twoway_list	*last_node;
	t_twoway_list	*guard_node;

	if (!head || !new)
		return ;
	if (!(*head))
		*head = new;
	else
	{
		last_node = twolstlast(*head);
		guard_node = last_node->next;
		last_node->next = new;
		new->previous = last_node;
		new->next = guard_node;
		guard_node->previous = new;
	}
}
