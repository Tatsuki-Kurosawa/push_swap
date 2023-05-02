/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstclear_withguard.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:51:13 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/05/03 01:24:57 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstclear_withguard(t_twoway_list **twolist)
{
	t_twoway_list	*next_node;
	t_twoway_list	*guard_node;

	if (!twolist)
		return ;
	tohead(twolist);
	guard_node = (*twolist)->previous;
	while ((*twolist)->guard == 0)
	{
		next_node = (*twolist)->next;
		twolstdelone(*twolist);
		*twolist = next_node;
		if (next_node == guard_node)
			break ;
		(*twolist)->previous = guard_node;
		guard_node->next = *twolist;
	}
	twolstdelone(*twolist);
	*twolist = NULL;
	return ;
}

// 番兵で繋がっている
// 全て削除するから先頭にずらしていい
// ノード数カウントする関数あった方がいい