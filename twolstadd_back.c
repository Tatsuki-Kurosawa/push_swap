/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:48:20 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/15 02:52:32 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	twolstadd_back(t_twoway_list **twolst, t_twoway_list *new)
{
	t_twoway_list	*buf;

	if (!twolst || !new)
		return ;
	buf = *twolst;
	*twolst = new;
	new->previous = buf;
	buf->next = new;
}
