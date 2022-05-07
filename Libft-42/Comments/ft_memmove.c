/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:21:28 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 18:30:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//src-ի պարունակությունը copy-ա անում ու պահումա buffer-ի մեջ հետո move-ա անում src-ի մեջ: solve overlaping, used buffer
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;//Hello	dst
			  //01234	NULL
	i = 0;//n = 3
	if ((size_t)dst - (size_t)src < n)
	{
		i = n - 1;// = 2
		while (i >= 0 && i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;//put i from end
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;//put i from front
		}
	}
	return (dst);
}
