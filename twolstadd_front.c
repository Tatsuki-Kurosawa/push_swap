/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:42:13 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/15 02:50:39 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	twolstadd_front(t_twoway_list **twolst, t_twoway_list *new)
{
	t_twoway_list	*buf;

	if (!twolst || !new)
		return ;
	buf = *twolst;
	*twolst = new;
	new->previous = buf;
	buf->next = new;
}
