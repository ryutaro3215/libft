/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:13 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/19 20:47:21 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re_mem;
	size_t	mem_size;

	if (count == 0 || size == 0)
		mem_size = 1;
	if (SIZE_MAX / count < size)
		return (NULL);
	mem_size = count * size;
	re_mem = malloc(mem_size);
	if (re_mem == NULL)
		return (NULL);
	ft_bzero(re_mem, mem_size);
	return (re_mem);
}
