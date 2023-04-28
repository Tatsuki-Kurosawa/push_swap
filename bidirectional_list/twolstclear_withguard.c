/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstclear_withguard.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:51:13 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 16:32:57 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstclear_withguard(t_twoway_list **twolist)
{
	t_twoway_list	*next_node;
	t_twoway_list	*guard_node;
	int				num_of_node;
	int				i;

	if (!twolist)
		return ;
	i = 0;
	tohead(twolist);
	num_of_node = twolstsize(*twolist);
	guard_node = (*twolist)->previous;
	while (i + 1 < num_of_node)
	{
		next_node = (*twolist)->next;
		twolstdelone(*twolist);
		*twolist = next_node;
		(*twolist)->previous = guard_node;
		guard_node->next = *twolist;
		i++;
	}
	twolstdelone(*twolist);
	*twolist = NULL;
	return ;
}

// 番兵で繋がっている
// 全て削除するから先頭にずらしていい
// ノード数カウントする関数あった方がいい