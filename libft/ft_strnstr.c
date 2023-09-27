/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:52:55 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:30:22 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	while (!(*needle))
		return ((char *)haystack);
	while (len > 0 && *haystack != '\0')
	{
		h = (char *)haystack;
		n = (char *)needle;
		i = len;
		while (*n != '\0' && (*h == *n) && i > 0)
		{
			h++;
			n++;
			i--;
		}
		if (!(*n))
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
