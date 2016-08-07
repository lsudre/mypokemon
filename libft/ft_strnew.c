/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 10:36:52 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 18:33:51 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;
	size_t	i;

	p = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	if (p)
	{
		while (i <= size)
		{
			p[i] = '\0';
			i++;
		}
	}
	return (p);
}
