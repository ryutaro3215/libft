/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:13 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/28 21:56:36 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re_mem;
	char	*tmp;

	/*if ((int)count <= 0 || (int)size <= 0)
		return (NULL);
	*/
	re_mem = malloc(count * size);
	if (re_mem == NULL)
		return (NULL);
	tmp = (char *)re_mem;
	ft_bzero(tmp, count * size);
	return (re_mem);
}
