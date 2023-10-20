/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:24:31 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/20 21:44:56 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;
	char	*start;
	char	*temp;

	len = 0;
	temp = (char *)s1;
	while (*temp)
	{
		len++;
		temp++;
	}
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	start = copy;
	while (*s1)
	{
		*copy = *s1;
		copy++;
		s1++;
	}
	*copy = '\0';
	return (start);
}
