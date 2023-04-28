/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:39:07 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 01:38:14 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**make_only_numbers(int num_of_int, char **numbers)
{
	int		i;
	char	**only_number;

	only_number = (char **)malloc(sizeof(char *) * (num_of_int + 1));
	if (!only_number)
		return (NULL);
	i = 0;
	while (i < num_of_int)
	{
		only_number[i] = numbers[i + 1];
		i++;
	}
	only_number[i] = NULL;
	return (only_number);
}

void	push_swap(int quantity, char **numbers, \
					t_twoway_list **stacka, t_twoway_list **stackb)
{
	int		num_of_int;
	char	**only_numbers;

	num_of_int = quantity - 1;
	if (num_of_int == 1)
		return ;
	only_numbers = make_only_numbers(num_of_int, numbers);
	if (!only_numbers)
	{
		write(2, "malloc Error\n", ft_strlen("malloc Error\n"));
		exit(1);
	}
	*stacka = create_twolst(num_of_int, only_numbers);
	free(only_numbers);
	if (!(*stacka))
	{
		write(2, "List Error\n", ft_strlen("List Error\n"));
		exit(1);
	}
	printf("stackb: %p\n", stackb);
	if (num_of_int == 2)
		two_arguments(stacka);
	else if (num_of_int == 3)
		three_arguments(stacka);
	else if (num_of_int == 4)
		four_arguments(stacka, stackb);
	return ;
}

// 3,4,5,6の場合は別の関数作ってそっちに任せた方がいいかも
// ポインタのアドレスを渡している