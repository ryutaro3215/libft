/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:54:08 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 00:19:15 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		re_val;
	int		i;
	long	flag;

	i = 0;
	flag = 1;
	re_val = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	return (make_int(str, flag));
}
long	make_int(const char *str, long flag)
{
	long	number;
	int		i;

	number = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		number = str[i] - '0';
		i++;
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10;
			if (check_number(number, flag, str[i] - '0') == 1)

		}
	}
}

int	check_number(long number, long flag, long next_num)
{
	if ()
}
