/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:25:24 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/28 19:25:44 by rmatsuba         ###   ########.fr       */
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
