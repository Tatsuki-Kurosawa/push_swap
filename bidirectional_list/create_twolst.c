/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_twolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 02:41:03 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 03:57:00 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	binding_guard(t_twoway_list **head, t_twoway_list *node)
{
	t_twoway_list	*guard;
	t_twoway_list	*h_node;
	int				number;
	int				guard_flag;

	number = 0;
	guard_flag = 1;
	guard = twolstnew(number, guard_flag);
	h_node = *head;
	node->next = guard;
	guard->next = h_node;
	h_node->previous = guard;
	guard->previous = node;
}

t_twoway_list	*create_twolst(int quantity, char **numbers)
{
	t_twoway_list	*head;
	t_twoway_list	*node;
	int				i;
	int				guard_flag;

	head = NULL;
	guard_flag = 0;
	i = 1;
	while (i < quantity)
	{
		node = twolstnew(ft_atoi(numbers[i]), guard_flag);
		if (!node)
		{
			// twolstclear(&head);
			return (NULL);
		}
		twolstadd_back(&head, node);
		i++;
	}
	binding_guard(&head, node);
	return (head);
}
