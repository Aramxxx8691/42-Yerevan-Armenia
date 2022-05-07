/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:16:34 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 16:23:30 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *needle, const char *haystack, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack[0] == '\0')
		return ((char *)needle);
	while (needle[i] != '\0')
	{
		j = 0;
		while (needle[i + j] == haystack[j] && (i + j) < len)
		{
			if (needle[i + j] == '\0' && haystack[j] == '\0')
				return ((char *)&needle[i]);
			j++;
		}
		if (haystack[j] == '\0')
			return ((char *)needle + i);
		i++;
	}
	return (0);
}
