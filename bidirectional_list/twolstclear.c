/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:53:43 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 16:17:03 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstclear(t_twoway_list **twolist)
{
	t_twoway_list	*node;

	if (!twolist)
		return ;
	while (*twolist)
	{
		node = (*twolist)->next;
		twolstdelone(*twolist);
		*twolist = node;
	}
	return ;
}
