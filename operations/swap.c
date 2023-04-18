/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:34:12 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 12:17:47 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_twoway_list **twolist)
{
	t_twoway_list	*next_node;
	int				buf;

	tohead(twolist);
	next_node = (*twolist)->next;
	buf = (*twolist)->content;
	(*twolist)->content = next_node->content;
	next_node->content = buf;
}

void	sa(t_twoway_list **twolist)
{
	swap(twolist);
	write(1, "sa\n", ft_strlen("sa\n"));
}

void	sb(t_twoway_list **twolist)
{
	swap(twolist);
	write(1, "sb\n", ft_strlen("sb\n"));
}

void	ss(t_twoway_list **list_a, t_twoway_list **list_b)
{
	swap(list_a);
	swap(list_b);
	write(1, "ss\n", ft_strlen("ss\n"));
}
