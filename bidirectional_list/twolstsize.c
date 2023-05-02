/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twolstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:57:02 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/05/02 22:32:40 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	twolstsize(t_twoway_list *twolist)
{
	int				count;

	count = 0;
	if (!twolist)
		return (count);
	while (twolist->guard == 0)
	{
		count++;
		twolist = twolist->next;
	}
	count++;
	return (count);
}

// 番兵のーども含めてカウントしている