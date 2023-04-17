/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tohead.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:26:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/17 01:20:20 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tohead(t_twoway_list **twolist)
{
	t_twoway_list	*node;

	node = *twolist;
	while (node->guard == 0)
		node = node->next;
	node = node->next;
	*twolist = node;
}
