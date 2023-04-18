/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tohead.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:26:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 12:03:24 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tohead(t_twoway_list **twolist)
{
	while ((*twolist)->guard == 0)
		(*twolist) = (*twolist)->next;
	(*twolist) = (*twolist)->next;
}
