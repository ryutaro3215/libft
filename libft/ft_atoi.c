/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:54:08 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/23 18:53:23 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	re_val;
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	re_val = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\v'
		|| str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		re_val = re_val * 10 + (str[i] - '0');
		i++;
	}
	return (re_val * flag);
}
