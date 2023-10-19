/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:11 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/30 00:51:30 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		word_count;
	char	*applied_string;

	if (!s)
		return (NULL);
	word_count = ft_strlen(s);
	i = 0;
	applied_string = (char *)malloc(word_count + 1);
	if (applied_string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		applied_string[i] = f(i, s[i]);
		i++;
	}
	applied_string[i] = '\0';
	return (applied_string);
}
