/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:41:28 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 21:02:53 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstadd_front(t_twoway_list **head, t_twoway_list *new)
{
	t_twoway_list	*pointed_node;

	if (!head || !new)
		return ;
	if (!*head)
		*head = new;
	else
	{
		pointed_node = *head;
		pointed_node->previous = new;
		new->next = pointed_node;
		*head = new;
	}
}
