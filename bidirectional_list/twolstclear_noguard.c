/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:53:43 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 21:40:18 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twolstclear_noguard(t_twoway_list **twolist)
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

// ここにNULLを指す処理を書いてもあり？？
// わざわざ別のファイルを作成して書く必要があるか？
// これまでは番兵が繋がれる手前で使用されていた
// NULLを指す処理を追加して問題ないか