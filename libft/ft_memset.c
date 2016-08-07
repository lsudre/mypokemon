/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 07:30:23 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 18:40:01 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	j;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	j = (unsigned char)c;
	while (i < n)
	{
		str[i] = j;
		i++;
	}
	return (s);
}
