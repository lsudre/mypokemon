/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 14:26:57 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 19:06:35 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char *)s;
	str2 = (char *)(malloc((len + 1) * sizeof(char)));
	i = 0;
	if (str1 && str2)
	{
		while (i < len)
		{
			str2[i] = str1[start];
			i++;
			start++;
		}
		str2[i] = '\0';
	}
	return (str2);
}
