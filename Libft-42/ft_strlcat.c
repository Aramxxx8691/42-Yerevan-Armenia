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

size_t	ft_strlcat(char *dst, const char *src, size_t detsize)
{
	size_t	i;
	size_t	l;

	if (detsize <= ft_strlen(dst))
		return (detsize + ft_strlen(src));
	i = ft_strlen(dst);
	l = 0;
	while (src[l] != '\0' && i + 1 < detsize)
	{
		dst[i] = src[l];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[l]));
}
