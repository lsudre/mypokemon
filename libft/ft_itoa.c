/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:09:50 by lsudre            #+#    #+#             */
/*   Updated: 2016/04/26 18:07:01 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_of_int(int i)
{
	int j;

	if (i == 0)
		return (1);
	j = 0;
	while (i != 0)
	{
		j++;
		i = i / 10;
	}
	return (j);
}

static int	ft_sign_of_int(int i)
{
	if (i < 0)
		return (1);
	return (0);
}

static int	ft_sw_sign(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*result;

	sign = ft_sign_of_int(n);
	i = ft_len_of_int(n);
	result = NULL;
	result = (char *)malloc(sizeof(char) * (i + sign + 1));
	if (result)
	{
		result = result + i + sign;
		*result = '\0';
		if (!n)
			*--result = '0';
		while (n != 0)
		{
			*--result = ft_sw_sign(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--result = '-';
	}
	return (result);
}
