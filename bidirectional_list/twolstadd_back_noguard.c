/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_back_noguard.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:48:20 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 01:56:19 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstadd_back_noguard(t_twoway_list **head, t_twoway_list *new)
{
	t_twoway_list	*last_node;

	if (!head || !new)
		return ;
	if (!(*head))
		*head = new;
	else
	{
		last_node = twolstlast(*head);
		last_node->next = new;
		new->previous = last_node;
	}
}
