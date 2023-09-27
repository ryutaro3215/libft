/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:12:18 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 19:25:15 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set);
int	count_size(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	int		i;
	int		j;
	int		mem_size;

	i = 0;
	j = 0;
	mem_size = count_size(s1, set);
	trimed_str = (char *)malloc(mem_size + 1);
	if (trimed_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (!is_set(s1[i], set))
		{
			while (mem_size--)
				trimed_str[j++] = s1[i++];
			trimed_str[j] = '\0';
			return (trimed_str);
		}
		i++;
	}
	trimed_str[0] = '\0';
	return (trimed_str);
}

int	count_size(char const *s1, char const *s2)
{
	int	head;
	int	tail;
	int	i;
	int	s1_len;

	head = 0;
	tail = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	while (is_set(s1[i], s2))
	{
		head++;
		i++;
	}
	if (head == s1_len)
		return (0);
	i = s1_len - 1;
	while (is_set(s1[i], s2))
	{
		tail++;
		i--;
	}
	return (s1_len - head - tail);
}

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
