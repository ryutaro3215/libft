/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:13 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 20:07:56 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re_mem;
	char	*tmp;
	size_t	i;
	long	c;
	long	s;

	i = 0;
	c = (long)count;
	s = (long)size;
	if (c < 0 && s < 0)
		return (NULL);
	re_mem = malloc(count * size + 1);
	if (re_mem == NULL)
		return (NULL);
	tmp = (char *)re_mem;
	ft_bzero(tmp, count * size);
	return (re_mem);
}
