/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:38:11 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 17:05:39 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s1-ի պարունակությունը copy-ա անում str-ի մեջ
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;//Hello
			  //01234
	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));//allocating space for str at the same time in malloc
	if (!str)//str i = 5 + \0
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;// \0
	return (str);//contents of malloc(str)
}
