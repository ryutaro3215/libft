/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:59 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/28 22:01:24 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*word_point(char const *s, char c);
int		word_num(char const *s, char c);
int		word_len(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**splited_str;
	int		i;

	i = 0;
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

// int main()
// {
//     const char *input_string = "      split       this for   me  !       ";
//     char separator = ' '; // 区切り文字をスペースに設定

//     char **result = ft_split(input_string, separator);

//     if (result == NULL)
//     {
//         printf("Error: Memory allocation failed.\n");
//         return 1;
//     }

//     // 分割された単語を表示
//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("Word %d: %s\n", i + 1, result[i]);
//         free(result[i]); // 動的メモリの解放
//         i++;
//     }

//     free(result); // 動的メモリの解放

//     return 0;
// }
