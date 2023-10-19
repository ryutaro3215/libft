/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:59 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/19 11:16:32 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	word_count(char const *s, char c);
void	word_len(char **tmp, unsigned int *len, char c);
char	**free_str(char **splited_str);
char	**make_str(char const *s, char c, char **splited_str);

char	**ft_split(char const *s, char c)
{
	char	**splited_str;

	if (!s)
		return (NULL);
	splited_str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!splited_str)
		return (NULL);
	return (make_str(s, c, splited_str));
}

unsigned int	word_count(char const *s, char c)
{
	unsigned int	result;
	int				i;

	result = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			while (s[i] == c && s[i])
				i++;
		}
	}
	return (result);
}

void	word_len(char **tmp, unsigned int *len, char c)
{
	unsigned int	i;

	*tmp += *len;
	*len = 0;
	i = 0;
	while (**tmp && **tmp == c)
		(*tmp)++;
	while ((*tmp)[i])
	{
		if ((*tmp)[i] == c)
			return ;
		(*len)++;
		i++;
	}
}

char	**free_str(char **splited_str)
{
	unsigned int	i;

	i = 0;
	while (splited_str[i])
	{
		free(splited_str[i]);
		splited_str[i] = NULL;
		i++;
	}
	free(splited_str);
	splited_str = NULL;
	return (NULL);
}

char	**make_str(char const *s, char c, char **splited_str)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	len;
	char			*tmp;

	i = 0;
	tmp = (char *)s;
	count = word_count(s, c);
	len = 0;
	while (i < count)
	{
		word_len(&tmp, &len, c);
		splited_str[i] = (char *)malloc(sizeof(char) * len + 1);
		if (splited_str[i] == NULL)
			return (free_str(splited_str));
		ft_strlcpy(splited_str[i], tmp, (size_t)len + 1);
		i++;
	}
	splited_str[i] = NULL;
	return (splited_str);
}
