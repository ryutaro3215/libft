/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:33:06 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:28:10 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	w;

	cs = (unsigned char *)s;
	w = (char)c;
	while (n > 0)
	{
		if (*cs == w)
			return (cs);
		n--;
		cs++;
	}
	return (NULL);
}
