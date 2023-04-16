/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:30:07 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 09:56:03 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_digit(char *str)
{
	size_t	i;
	size_t	len;
	int		flag;
	int		sign_flag;

	len = ft_strlen(str);
	flag = 0;
	sign_flag = 0;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		sign_flag = 1;
		i++;
	}
	while (i < len)
	{
		if (!ft_isdigit(str[i]))
			flag = 1;
		i++;
	}
	if (sign_flag == 1 && len == 1)
		flag = 1;
	return (flag);
}

int	check_argument(int quantity, char **strs)
{
	int	i;
	int	check;

	i = 1;
	check = 0;
	while (i < quantity)
	{
		if (check_digit(strs[i]))
		{
			check = 1;
			break ;
		}
		i++;
	}
	if (quantity == 1)
		check = 1;
	return (check);
}
