/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tohead.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:26:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 21:03:13 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tohead(t_twoway_list **twolist)
{
	t_twoway_list	*node;

	node = *twolist;
	while (node->guard == 0)
	{
		printf("node->content: %d\n", node->content);
		node = node->next;
	}
	node = node->next;
	printf("node->content: %d\n", node->content);
	printf("node->guard: %d\n", node->guard);
	*twolist = node;
}
