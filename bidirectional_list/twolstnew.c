/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:37:51 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/20 18:40:02 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_twoway_list	*twolstnew(int number, int guard_flag)
{
	t_twoway_list	*node;

	node = (t_twoway_list *)malloc(sizeof(t_twoway_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->content = number;
	node->guard = guard_flag;
	node->previous = NULL;
	return (node);
}
