/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 03:50:34 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_twoway_list	*stack_a;
	// t_twoway_list	*stack_b;
	int				i;
	int				num;
	int				flag;

	if (check_argument(argc, argv))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	stack_a = create_twolst(argc, argv);
	i = 0;
	while (i < 14)
	{
		num = stack_a->content;
		flag = stack_a->guard;
		if (flag == 1)
			printf("guard\n");
		else
			printf("%d\n", num);
		stack_a = stack_a->previous;
		i++;
	}

	return (0);
}
