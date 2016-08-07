/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 11:23:30 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 18:44:17 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	i;
	char	*str;

	i = (char)c;
	len = ft_strlen(s) - 1;
	str = (char *)s;
	if (i == '\0')
		return (str + len + 1);
	while (len >= 0)
	{
		if (str[len] == i)
			return (str + len);
		len--;
	}
	return (0);
}
