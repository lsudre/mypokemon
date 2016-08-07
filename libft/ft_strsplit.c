/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 14:32:10 by lsudre            #+#    #+#             */
/*   Updated: 2016/01/16 18:37:07 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (j == 0 && *s != c)
		{
			j = 1;
			i++;
		}
		else if (j == 1 && *s == c)
			j = 0;
		s++;
	}
	return (i);
}

static int	ft_length(char const *s, char c)
{
	int	k;

	k = 0;
	while (*s != c && *s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**k;

	if (s)
	{
		i = 0;
		j = ft_count(s, c);
		k = (char **)malloc(sizeof(char *) * (j + 1));
		if (!k)
			return (NULL);
		while (j--)
		{
			while (*s == c && *s != '\0')
				s++;
			k[i] = ft_strsub(s, 0, ft_length(s, c));
			if (k[i] == NULL)
				return (NULL);
			s = s + ft_length(s, c);
			i++;
		}
		k[i] = NULL;
		return (k);
	}
	return (NULL);
}
