/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 02:18:18 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_twoway_list	*stacka;
	int				i;
	int				num;
	int				flag;

	if (check_argument(argc, argv))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		exit (1);
	}
	stacka = create_twolst(argc, argv);
	push_swap(argc, &stacka);
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
	// sa(&stacka);
	// printf("\n\nswap(sa)後\n");
	// i = 0;
	// while (i < 7)
	// {
	// 	num = stacka->content;
	// 	flag = stacka->guard;
	// 	if (flag == 1)
	// 		printf("guard\n");
	// 	else
	// 		printf("%d\n", num);
	// 	stacka = stacka->next;
	// 	i++;
	// }
	// rra(&stacka);
	// printf("\n\nreverse_rotate(rra)後\n");
	// i = 0;
	// while (i < 7)
	// {
	// 	num = stacka->content;
	// 	flag = stacka->guard;
	// 	if (flag == 1)
	// 		printf("guard\n");
	// 	else
	// 		printf("%d\n", num);
	// 	stacka = stacka->next;
	// 	i++;
	// }
	return (0);
}
