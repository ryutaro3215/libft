/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:01:55 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/27 21:42:11 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_len;

	node_len = 0;
	if (lst == NULL)
		return (0);
	while (lst->next)
	{
		node_len++;
		lst = lst->next;
	}
	return (node_len + 1);
}
