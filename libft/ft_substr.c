/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:25:24 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/30 00:49:20 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_substr(size_t len, unsigned int start, char const *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*result;

	if (!s)
		return (NULL);
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
