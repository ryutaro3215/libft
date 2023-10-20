/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:13 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 17:43:20 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re_mem;
	size_t	mem_size;

	if ((size != 0 && SIZE_MAX / size < count))
		return (NULL);
	mem_size = count * size;
	re_mem = malloc(mem_size);
	if (re_mem == NULL)
		return (NULL);
	ft_bzero(re_mem, mem_size);
	return (re_mem);
}
