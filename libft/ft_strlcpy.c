/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:20:35 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:29:59 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	char	*temp_src;
	int		src_len;

	src_len = 0;
	temp_src = src;
	while (*temp_src++)
		src_len++;
	if (size != 0)
	{
		while (*src && size > 1)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (src_len);
}
