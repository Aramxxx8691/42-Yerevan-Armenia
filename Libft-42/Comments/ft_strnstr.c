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
//հայտնաբերում է "needle"-ը "haystack" str-ի len երկարությունում և վերադարձնում այն ու նրանից հետո ինչ կա: Եթե չի բավարարում len-ը՝ NULL: "needle" դատարկ է՝ str
char	*ft_strnstr(const char *needle, const char *haystack, size_t len)
{							  //Hello World			//ello		//2, 4, 8
	size_t	i;//=1			i	012345678910	j	  0123
	size_t	j;					

	i = 0;
	if (haystack[0] == '\0')
		return ((char *)needle);
	while (needle[i] != '\0')
	{
		j = 0;
		while (needle[i + j] == haystack[j] && (i + j) < len)//searching haystack j in needle i //i + j -> my i from j
		{
			if (needle[i + j] == '\0' && haystack[j] == '\0')//type till \0
				return ((char *)&needle[i]);
			j++;
		}
		if (haystack[j] == '\0')//set haystack end
			return ((char *)needle + i);
		i++;
	}
	return (0);
}
