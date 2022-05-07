/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:16:27 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 13:22:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//*s-ի մեջ ինչ որ substr start-ից սկցած գրելուա len երկարությամբ, malloc-ով տեղա հատկացնելու մեր str-ին հետո վերադարձնելուա substr-ով փոփոխված str-ը մեզ
char	*ft_substr(char	const *s, unsigned int start, size_t len)
{							//Hello World!	//4, 6, 14		4, 15
	char	*substr;		//01234567891011
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = ft_strlen(s);//12
	j = 0;
	if (start < i)//4<12 // 6<12 // 14<12 !
		j = i - start;//=12-4=6 // 4 // !
	if (j > len)//6>4 || 6>15 !...
		j = len;// =4 // !...
	substr = (char *)malloc(sizeof(char) * (j + 1));//5 // 5 // 1 // 5
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, j + 1);//s + start -> my "s" from start 
	return (substr);
}
