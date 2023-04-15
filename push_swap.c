/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/15 04:33:48 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_twoway_list	**binding(t_twoway_list **twolst, t_twoway_list *node)
{
	t_twoway_list	*head;
	t_twoway_list	*guard;

	guard = twolstnew(NULL);
	head = twolsthead(node);
	node->next = guard;
	guard->next = head;
	head->previous = guard;
	*twolst = head;
	return (twolst);
}

t_twoway_list	**create_twolst(int quantity, char **numbers)
{
	t_twoway_list	**new_twolist;
	t_twoway_list	*node;
	int				i;
	int				number;

	new_twolist = NULL;
	i = 0;
	while (i < quantity)
	{
		number = ft_atoi(numbers[i]);
		node = twolstnew(&number);
		twolstadd_back(new_twolist, node);
		i++;
	}
	new_twolist = binding(new_twolist, node);
	return (new_twolist);
}

int	main(int argc, char **argv)
{
	t_twoway_list	**twolst;
	t_twoway_list	*node;
	int				*num;

	twolst = create_twolst(argc, argv);
	node = *twolst;
	while (node->content)
	{
		num = node->content;
		printf("%d\n", *num);
		node = node->next;
	}
	return (0);
}
