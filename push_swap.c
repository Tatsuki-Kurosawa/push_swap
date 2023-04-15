/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 02:18:47 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	binding_guard(t_twoway_list **head, t_twoway_list *node)
{
	t_twoway_list	*guard;
	t_twoway_list	*h_node;

	guard = twolstnew(NULL);
	h_node = *head;
	node->next = guard;
	guard->next = h_node;
	h_node->previous = guard;
	guard->previous = node;
}

static t_twoway_list	*create_twolst(int quantity, char **numbers)
{
	t_twoway_list	*head;
	t_twoway_list	*node;
	int				i;
	// int				j;

	head = NULL;
	i = 1;
	while (i < quantity)
	{
		node = twolstnew(numbers[i]);
		if (!node)
		{
			// twolstclear(&head);
			return (NULL);
		}
		twolstadd_back(&head, node);
		i++;
	}
	binding_guard(&head, node);
	// j = 0;
	// while (j < 19)
	// {
	// 	printf("head->content: %s\n", head->content);
	// 	head = head->next;
	// 	j++;
	// }
	return (head);
}

int	main(int argc, char **argv)
{
	t_twoway_list	*twolst;
	// t_twoway_list	*node;
	// int				*num;

	if (check_argument(argc, argv))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	printf("check: %d\n", check_argument(argc, argv));
	twolst = create_twolst(argc, argv);
	printf("%p\n", twolst);
	// node = *twolst;
	// while (node->content)
	// {
	// 	num = node->content;
	// 	printf("%d\n", *num);
	// 	node = node->next;
	// }
	return (0);
}
