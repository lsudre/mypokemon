/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 16:14:23 by lsudre            #+#    #+#             */
/*   Updated: 2016/07/19 11:46:03 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

int	read_fd(const int fd, char **chr)
{
	char	*buffer;
	int		read_bytes;
	char	*tmp;

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	buffer[BUFF_SIZE + 1] = '\n';
	read_bytes = read(fd, buffer, BUFF_SIZE);
	if (read_bytes > 0)
	{
		buffer[read_bytes] = '\0';
		tmp = ft_strjoin(*chr, buffer);
		if (!tmp)
			return (-1);
		free(*chr);
		*chr = tmp;
	}
	free(buffer);
	return (read_bytes);
}

int	get_next_line(const int fd, char **line)
{
	static char	*chr;
	int			ret;
	char		*backn_index;

	if (!chr && (chr = (char *)malloc(sizeof(char))) == NULL)
		return (-1);
	backn_index = ft_strchr(chr, '\n');
	while (backn_index == NULL)
	{
		if ((ret = read_fd(fd, &chr)) == 0)
		{
			if ((backn_index = ft_strchr(chr, '\0')) == chr)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			backn_index = ft_strchr(chr, '\n');
	}
	*line = ft_strsub(chr, 0, backn_index - chr);
	backn_index = ft_strdup(backn_index + 1);
	free(chr);
	chr = backn_index;
	return ((!*line) ? -1 : 1);
}
