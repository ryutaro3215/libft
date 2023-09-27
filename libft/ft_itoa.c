/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:36:06 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 13:43:45 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	insert_string(long ln, char *string_num, int digit);

char	*ft_itoa(int n)
{
	int		digit;
	long	ln;
	char	*string_num;

	ln = n;
	digit = digit_count(ln);
	string_num = (char *)malloc(digit + 1);
	if (string_num == NULL)
		return (NULL);
	insert_string(ln, string_num, digit);
	return (string_num);
}	

void	insert_string(long ln, char *string_num, int digit)
{
	int	i;

	i = digit - 1;
	if (ln != 0)
	{
		if (ln < 0)
		{
			ln = -ln;
			string_num[0] = '-';
		}
		while (i >= 0 && ln > 0)
		{
			string_num[i] = (ln % 10) + '0';
			i--;
			ln = ln / 10;
		}
		string_num[digit] = '\0';
	}
	else
	{
		string_num[0] = '0';
		string_num[1] = '\0';
	}
	return ;
}
