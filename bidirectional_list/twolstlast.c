/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:46:02 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/17 00:35:32 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_twoway_list	*twolstlast(t_twoway_list *node)
{
	if (!node)
		return (NULL);
	while (node->next && node->guard == 0)
		node = node->next;
	if (node->guard == 1)
		node = node->previous;
	return (node);
}
