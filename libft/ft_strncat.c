/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 13:17:40 by lsudre            #+#    #+#             */
/*   Updated: 2015/10/25 15:07:37 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *dest_size;

	dest_size = dest;
	while (*dest_size != '\0')
		dest_size++;
	while (nb-- > 0 && *src != '\0')
		*dest_size++ = *src++;
	*dest_size = '\0';
	return (dest);
}
