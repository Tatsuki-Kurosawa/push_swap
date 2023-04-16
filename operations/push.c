/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:21:02 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 20:32:46 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	take_node(t_twoway_list **list_out)
{
	t_twoway_list	*head_out;
	t_twoway_list	*next_node;
	t_twoway_list	*guard_node;
	int				buf;

	tohead(list_out);
	head_out = *list_out;
	buf = head_out->content;
	next_node = head_out->next;
	guard_node = head_out->previous;
	next_node->previous = guard_node;
	guard_node->next = next_node;
	free(head);
	return (buf);
}

static void	put_node(t_twoway_list **list_in, int content)
{
	t_twoway_list	*head_in;
	t_twoway_list	*last_node;
	t_twoway_list	*new_node;
	t_twoway_list	*guard_node;
	int				guard;

	guard = 0;
	new_node = twolstnew(content, guard);
	tohead(list_in);
	head_in = *list_in;
	twolstadd_front(list_in, new_node);
	last_node = twolstlast(head_in);
	guard_node = last_node.next;
	guard_node->next = head_in;
	head_in->previous = guard_node;
}

static void	push(t_twoway_list **list_in, int content)
{
	int	content;

	content = take_node(list_out);
	put_node(list_in, content);
}

void	pa(t_twoway_list **list_a, t_twoway_list **list_b)
{
	push(list_a, list_b);
}

void	pb(t_twoway_list **list_a, t_twoway_list **list_b)
{
	push(list_b, list_a);
}
