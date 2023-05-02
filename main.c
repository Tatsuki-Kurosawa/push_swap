/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:38:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/28 21:42:19 by kurosawaits      ###   ########.fr       */
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
	// printf("push(pb)stackA\n");
	// pb(&stacka, &stackb);
	i = 0;
	while (i < 14)
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
	// printf("\n\npush(pb)stackB\n\n");
	// i = 0;
	// while (i < 4)
	// {
	// 	num = stackb->content;
	// 	flag = stackb->guard;
	// 	if (flag == 1)
	// 		printf("guard\n");
	// 	else
	// 		printf("%d\n", num);
	// 	stackb = stackb->next;
	// 	i++;
	// }
	// pa(&stacka, &stackb);
	// i = 0;
	// while (i < 4)
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
	// // sa(&stacka);
	// printf("\n\npush(pa)stackB\n\n");
	// i = 0;
	// while (i < 4)
	// {
	// 	num = stackb->content;
	// 	flag = stackb->guard;
	// 	if (flag == 1)
	// 		printf("guard\n");
	// 	else
	// 		printf("%d\n", num);
	// 	stackb = stackb->next;
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
	// free_stack(&stackb);
	return (0);
}
