/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:51:10 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 13:17:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//համեմատումա s1-ը ու s2-ը, աշխատում է ցանկացած structur-ի հետ:
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;//s1 Hello s2 Helloo
				 //01234	012345
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))//s1 < s2 = -111
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));//if 1>2 = +, 1<2 = -, 1=2 = 0
		i++;
	}
	return (0);
}
