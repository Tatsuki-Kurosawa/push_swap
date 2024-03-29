/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:53:19 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 10:49:07 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstdelone(t_twoway_list *node)
{
	if (!node)
		return ;
	node->previous = NULL;
	node->next = NULL;
	free(node);
	return ;
}

// nodeをfreeするだけでnodeの持つ情報は全て消えるのか？