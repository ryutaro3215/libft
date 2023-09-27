/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:36:10 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/09/26 16:28:56 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	c;

	ln = n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = -ln;
	}
	if (ln >= 10)
		ft_putnbr_fd(ln / 10, fd);
	c = (ln % 10) + '0';
	write(fd, &c, 1);
}
