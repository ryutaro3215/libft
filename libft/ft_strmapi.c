/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:11 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:30:14 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		word_count;
	char	*applied_string;

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
