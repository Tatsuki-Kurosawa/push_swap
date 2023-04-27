/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:39:07 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 17:14:29 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	compare_two_value(t_twoway_list **stacka)
{
	t_twoway_list	*node;
	int				content_1;
	int				content_2;
	int				check;

	node = *stacka;
	content_1 = node->content;
	node = node->next;
	content_2 = node->content;
	if (content_1 > content_2)
		check = 1;
	else
		check = 0;
	return (check);
}

void	push_swap(int quantity, char **numbers, \
					t_twoway_list **stacka, t_twoway_list **stackb)
{
	int				num_of_int;

	*stacka = create_twolst(quantity, numbers);
	if (!(*stacka))
	{
		write(2, "List Error\n", ft_strlen("List Error\n"));
		exit(1);
	}
	num_of_int = quantity - 1;
	if (num_of_int == 1)
		return ;
	else if (num_of_int == 2)
	{
		if (compare_two_value(stacka) == 1)
			sa(stacka);
	}
	else if (num_of_int == 3)
	{
		printf("stack_b: %p\n", stackb);
		three_arguments(stacka);
	}
	else if (num_of_int == 4)
	{
		four_arguments(stacka, stackb);
	}
	return ;
}

// 3,4,5,6の場合は別の関数作ってそっちに任せた方がいいかも