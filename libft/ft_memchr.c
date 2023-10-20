/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:33:06 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 21:17:27 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	word;

	cs = (unsigned char *)s;
	word = (unsigned char)c;
	while (n > 0)
	{
		if (*cs == word)
			return (cs);
		n--;
		cs++;
	}
	return (NULL);
}
