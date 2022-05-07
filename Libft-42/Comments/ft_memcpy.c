/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:59:07 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 18:00:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//src-ի պարունակությունը n size-ով copy-ա անում dst-ի մեջ: ignore overlaping, dont used buffer
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;//Hello	dst
			  //12345	NULL
	i = 0;//n = 3
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);//Hel
}
