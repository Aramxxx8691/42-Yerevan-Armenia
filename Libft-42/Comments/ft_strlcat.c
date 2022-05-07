/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:20:04 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 14:15:29 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//ավելացնումա src-ն dest-ի վերջից ու վերադարձնում է 2-ի size-ը
size_t	ft_strlcat(char *dst, const char *src, size_t detsize)
{					//Hello				//World
	size_t	i;
	size_t	l;

	if (detsize <= ft_strlen(dst))
		return (detsize + ft_strlen(src));//10
	i = ft_strlen(dst);//5
	l = 0;
	while (src[l] != '\0' && i + 1 < detsize)
	{
		dst[i] = src[l];//HelloWorld
		i++;
		l++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[l]));//11
}
	