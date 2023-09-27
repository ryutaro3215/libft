/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:25:24 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:30:37 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_substr(size_t len, unsigned int start, char const *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	size_t	s_len;
	char	*result;

	j = 0;
	i = start;
	s_len = ft_strlen(s);
	if (start >= (unsigned int)s_len)
	{
		result = (char *)malloc(1);
		*result = '\0';
		return (result);
	}
	else
	{
		if (s_len > len)
			result = make_substr(len, start, s);
		else
			result = make_substr(s_len, start, s);
		return (result);
	}
}

/* This function make arry and make substr*/

char	*make_substr(size_t len, unsigned int start, char const *s)
{
	int		j;
	char	*substr;

	j = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (j < (int)len)
	{
		substr[j] = s[start];
		start++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
