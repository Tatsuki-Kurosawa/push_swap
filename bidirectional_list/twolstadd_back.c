/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:48:20 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 16:20:44 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstadd_back(t_twoway_list **head, t_twoway_list *new)
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
