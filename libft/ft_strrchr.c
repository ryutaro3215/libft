/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:15:10 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:30:27 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_ary(char *ary);

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	w;
	int				i;
	const char		*rev_ad;

	i = size_ary((char *)s);
	w = (unsigned char)c;
	rev_ad = s + i;
	while (i >= 0)
	{
		if (*rev_ad == w)
			return ((char *)rev_ad);
		rev_ad--;
		i--;
	}
	return (NULL);
}

int	size_ary(char *ary)
{
	int	n;

	n = 0;
	while (ary[n] != '\0')
		n++;
	return (n);
}
