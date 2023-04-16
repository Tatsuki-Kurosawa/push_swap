/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 15:45:21 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_twoway_list	*stacka;
	// t_twoway_list	*stackb;
	int				i;
	int				num;
	int				flag;

	if (check_argument(argc, argv))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	stacka = create_twolst(argc, argv);
	printf("swap(sa)前\n");
	i = 0;
	while (i < 5)
	{
		num = stacka->content;
		flag = stacka->guard;
		if (flag == 1)
			printf("guard\n");
		else
			printf("%d\n", num);
		stacka = stacka->next;
		i++;
	}
	// stackb = NULL;
	// push_swap(argc, &stacka, &stackb);
	sa(&stacka);
	printf("\n\nswap(sa)後\n");
	i = 0;
	while (i < 7)
	{
		num = stacka->content;
		flag = stacka->guard;
		if (flag == 1)
			printf("guard\n");
		else
			printf("%d\n", num);
		stacka = stacka->next;
		i++;
	}
	return (0);
}