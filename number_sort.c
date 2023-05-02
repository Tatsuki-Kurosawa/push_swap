/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:29:16 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/05/03 03:08:59 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	return_number(t_twoway_list **stacka, t_twoway_list **stackb)
{
	int	len;
	int	i;

	len = twolstsize(*stackb);
	i = 0;
	while (i + 1 < len)
	{
		pa(stacka, stackb);
		i++;
	}
	return ;
}

static int	get_smallest_index(t_twoway_list **stack)
{
	int	smallest;
	int	j;
	int	smallest_index;

	j = 0;
	while ((*stack)->guard == 0)
	{
		if ((*stack)->content < smallest)
		{
			smallest_index = j;
			smallest = (*stack)->content;
		}
		*stack = (*stack)->next;
		j++;
	}
	return (smallest_index);
}

static void	judge(int index, int num_of_node, t_twoway_list **stacka, \
					t_twoway_list **stackb)
{
	int	difference;
	int	i;

	i = 0;
	difference = num_of_node - index;
	if (index == 1)
		sa(stacka);
	else if (num_of_node / 2 >= index)
	{
		while (i < index)
		{
			ra(stacka);
			i++;
		}
	}
	else
	{
		while (i < difference)
		{
			rra(stacka);
			i++;
		}
	}
	pb(stacka, stackb);
	return ;
}

void	number_sort(t_twoway_list **stacka, t_twoway_list **stackb)
{
	int	num_of_node;
	int	j;

	while (1)
	{
		tohead(stacka);
		num_of_node = twolstsize(*stacka) - 1;
		if (num_of_node == 3)
		{
			three_arguments(stacka);
			break ;
		}
		j = get_smallest_index(stacka);
		judge(j, num_of_node, stacka, stackb);
	}
	return_number(stacka, stackb);
	return ;
}
