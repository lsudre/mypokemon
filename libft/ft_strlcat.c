/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 13:18:05 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 18:46:44 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	int				src_len;
	int				i;

	len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (len > size)
		return (size + src_len);
	i = 0;
	while (i + len < size - 1 && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + src_len);
}
