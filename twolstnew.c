/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:37:51 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/15 04:29:15 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_twoway_list	*twolstnew(int *num)
{
	t_twoway_list	*node;

	node = (t_twoway_list *)malloc(sizeof(t_twoway_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->previous = NULL;
	node->content = num;
	return (node);
}
