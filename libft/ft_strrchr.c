/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:15:10 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 21:48:02 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	w;
	int				i;
	const char		*rev_ad;

	i = ft_strlen((char *)s);
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
