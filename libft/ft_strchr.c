/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:57:55 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:29:21 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	w;

	w = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == w)
			return ((char *)s);
		s++;
	}
	if (w == '\0')
		return ((char *)s);
	return (NULL);
}
