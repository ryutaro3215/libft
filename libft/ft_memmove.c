/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:05:28 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:27:06 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == '\0' && s == '\0')
		return (dst);
	if (dst <= src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = d + len;
		s = s + len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
