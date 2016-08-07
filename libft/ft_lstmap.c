/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre <lsudre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 17:26:57 by lsudre            #+#    #+#             */
/*   Updated: 2016/04/27 00:22:17 by lsudre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;

	if (lst && *f)
	{
		newlst = (*f)(lst);
		if (newlst && lst->next)
			newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (0);
}
