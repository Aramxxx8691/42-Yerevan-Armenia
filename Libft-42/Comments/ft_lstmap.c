/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:41:15 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/29 16:41:20 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*changed;

	if (!lst)
		return (0);
	new = 0;
	while (lst)
	{
		changed = ft_lstnew(f(lst->content));
		if (!changed)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, changed);
		lst = lst -> next;
	}
	return (new);
}
