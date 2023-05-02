/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_twolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 02:41:03 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 21:41:29 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_twoway_list	*binding_guard(t_twoway_list **head)
{
	t_twoway_list	*guard_node;
	t_twoway_list	*head_node;
	t_twoway_list	*tail_node;

	guard_node = twolstnew(0, 1);
	if (!guard_node)
	{
		twolstclear_noguard(head);
		return (NULL);
	}
	head_node = *head;
	tail_node = twolstlast(*head);
	if (!tail_node)
	{
		twolstclear_noguard(head);
		twolstdelone(guard_node);
		return (NULL);
	}
	tail_node->next = guard_node;
	guard_node->previous = tail_node;
	guard_node->next = head_node;
	head_node->previous = guard_node;
	return (*head);
}

t_twoway_list	*create_twolst(int num_of_int, char **numbers)
{
	t_twoway_list	*head;
	t_twoway_list	*node;
	int				i;
	int				guard_flag;

	head = NULL;
	guard_flag = 0;
	i = 0;
	while (i < num_of_int)
	{
		node = twolstnew(ft_atoi(numbers[i]), guard_flag);
		if (!node)
		{
			twolstclear_noguard(&head);
			return (NULL);
		}
		twolstadd_back_noguard(&head, node);
		i++;
	}
	head = binding_guard(&head);
	return (head);
}
