/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:26:50 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 22:00:02 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destnation;
	unsigned char	*source;

	i = 0;
	destnation = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (destnation == NULL && source == NULL)
		return (dst);
	while (i < n)
	{
		destnation[i] = source[i];
		i++;
	}
	return (dst);
}
