/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:35:54 by lsudre            #+#    #+#             */
/*   Updated: 2016/04/27 00:14:59 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	c = '0';
	if (n < 0)
	{
		write(fd, "-", 1);
		c -= (n % 10);
		if (n < -9)
			ft_putnbr_fd(-(n / 10), fd);
		write(fd, &c, 1);
	}
	if (n > 0)
	{
		c += n % 10;
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		write(fd, &c, 1);
	}
	else if (n == 0)
		write(fd, &c, 1);
}
