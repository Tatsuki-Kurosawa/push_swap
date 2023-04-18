/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:53:43 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 11:53:47 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstclear(t_twoway_list **twolist)
{
	t_twoway_list	*node;

	node = *twolist;
	while (node->previous)
	{
		*twolist = node->previous;
		free();
		node = *twolist;
	}
	return ;
}
