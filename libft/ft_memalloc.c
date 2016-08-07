/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 10:28:16 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/14 14:42:02 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)malloc(size);
	if (p)
	{
		while (i < size)
		{
			p[i] = 0;
			i++;
		}
	}
	return ((void *)p);
}
