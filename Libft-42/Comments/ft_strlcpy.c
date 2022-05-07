/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:22:45 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 14:34:18 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copy-ա անում ու վերադարձնումա պատճենած src-ը
size_t	ft_strlcpy(char *dst, const char *src, size_t size)// = 3
{
	size_t	i;//Hello
			  //01234
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;//He\0
	}
	while (src[i])
		i++;
	return (i);//3
}
