/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:13 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/18 22:08:07 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re_mem;

	re_mem = malloc(count * size);
	if (re_mem == NULL)
		return (NULL);
	ft_bzero(re_mem, count * size);
	return (re_mem);
}
