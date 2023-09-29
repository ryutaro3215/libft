/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:59 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/30 00:06:49 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*word_point(char const *s, char c);
int		word_num(char const *s, char c);
int		word_len(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**splited_str;
	int		i;

	i = 0;
	if (c == '\0')
		return (NULL);
	splited_str = (char **)malloc(sizeof(char *) * word_num(s, c) + 1);
	if (splited_str == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			splited_str[i] = word_point(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	splited_str[i] = NULL;
	return (splited_str);
}

char	*word_point(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = word_len(s, c);
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	word_num(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		while (s[1] != '\0' && s[i] == c)
			i++;
	}
	return (count);
}

int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
*/
static int		ft_wordscount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

static char		**ft_free2d_split(char **strarr)
{
	int	i;

	i = 0;
	while (strarr[i])
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
	return (NULL);
}

static int		word_end(char *s, char c, int i)
{
	int		click;

	click = 0;
	while (s && s[i] && click != 1)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			click = 1;
		}
		if (click != 1)
			i++;
	}
	return (i);
}

static char		*word_allocate(char *s, char c, int i, int j)
{
	char	*word;
	int		click;

	click = 0;
	while (s && *s && click != 1)
	{
		if (*s != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			click = 1;
		}
		if (click != 1)
			s++;
	}
	if (!(word = malloc(i + 1)))
		return (NULL);
	while (s && *s && *s != c)
	{
		word[j] = *s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**strarr;
	int		j;
	int		i;
	int		remember;

	if (!s)
		return (NULL);
	j = ft_wordscount(s, c);
	i = 0;
	remember = 0;
	if (!(strarr = malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	strarr[j] = NULL;
	while (i < j)
	{
		if (!(strarr[i] = word_allocate((char *)(s + remember), c, 0, 0)))
		{
			ft_free2d_split(strarr);
			return (NULL);
		}
		remember = word_end((char *)s, c, remember);
		i++;
	}
	return (strarr);
}
