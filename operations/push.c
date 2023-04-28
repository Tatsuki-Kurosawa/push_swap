/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:21:02 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 16:47:08 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (next_node->guard == 1)
		twolstclear_withguard(list_out);
	else
	{
		next_node = head_out->next;
		guard_node = head_out->previous;
		next_node->previous = guard_node;
		guard_node->next = next_node;
		twolstdelone(head_out);
		*list_out = next_node;
	}
	return (buf);
}

static void	put_node(t_twoway_list **list_in, int content)
{
	char	*number;
	int		num_of_int;
	int		guard_flag;

	if (!(*list_in))
	{
		num_of_int = 1;
		number = ft_itoa(content);
		*list_in = create_twolst(num_of_int, &number);
	}
	else
	{
		guard_flag = 0;
		twolstadd_front_withguard(list_in, twolstnew(content, guard_flag));
	}
	return ;
}

static void	push(t_twoway_list **list_in, t_twoway_list **list_out)
{
	int	content;

	content = take_node(list_out);
	put_node(list_in, content);
}

void	pa(t_twoway_list **list_a, t_twoway_list **list_b)
{
	push(list_a, list_b);
	write(1, "pa\n", ft_strlen("pa\n"));
}

void	pb(t_twoway_list **list_a, t_twoway_list **list_b)
{
	push(list_b, list_a);
	write(1, "pb\n", ft_strlen("pb\n"));
}

// 要素がなかったら何もしないという決まりをつけた方がいい