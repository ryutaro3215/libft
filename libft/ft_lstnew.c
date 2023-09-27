/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:12:43 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/27 20:00:52 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_struct;

	new_struct = (t_list *)malloc(sizeof(t_list));
	if (!(new_struct))
		return (NULL);
	new_struct->content = content;
	new_struct->next = NULL;
	return (new_struct);
}
