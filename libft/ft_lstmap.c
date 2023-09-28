/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:19:40 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/28 19:41:54 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*tmp;
	t_list	*first_node;

	if (lst)
	{
		tmp = lst;
		first_node = ft_lstnew(f(lst->content));
		while (tmp)
		{
			new_node = ft_lstnew(f(lst->content));
			if (new_node == NULL)
			{
				ft_lstclear(&first_node, del);
				return (NULL);
			}
			ft_lstadd_back(&first_node, new_node);
			tmp = tmp->next;
		}
		return (first_node);
	}
	return (NULL);
}
