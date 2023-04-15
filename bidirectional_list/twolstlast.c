/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:46:02 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 03:57:16 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_twoway_list	*twolstlast(t_twoway_list *node)
{

	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
