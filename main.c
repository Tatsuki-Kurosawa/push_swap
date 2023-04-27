/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/27 17:09:50 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_twoway_list	*stacka;
	t_twoway_list	*stackb;
	int				i;
	int				num;
	int				flag;

	if (check_argument(argc, argv))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		exit(1);
	}
	stacka = NULL;
	stackb = NULL;
	push_swap(argc, argv, &stacka, &stackb);
	printf("stackb %p\n", stackb);
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
	free_stack(&stacka);
	return (0);
}
