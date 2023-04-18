/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:47:24 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 12:17:18 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_twoway_list **list)
{
	t_twoway_list	*head_node;
	t_twoway_list	*next_node;
	t_twoway_list	*guard_node;
	t_twoway_list	*last_node;

	tohead(list);
	head_node = *list;
	next_node = head_node->next;
	guard_node = head_node->previous;
	last_node = guard_node->previous;
	guard_node->next = next_node;
	next_node->previous = guard_node;
	head_node->next = guard_node;
	guard_node->previous = head_node;
	head_node->previous = last_node;
	last_node->next = head_node;
	*list = next_node;
}

void	ra(t_twoway_list **list)
{
	rotate(list);
	write(1, "ra\n", ft_strlen("ra\n"));
}

void	rb(t_twoway_list **list)
{
	rotate(list);
	write(1, "rb\n", ft_strlen("rb\n"));
}

void	rr(t_twoway_list **list_a, t_twoway_list **list_b)
{
	rotate(list_a);
	rotate(list_b);
	write(1, "rr\n", ft_strlen("rr\n"));
}
