/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:19:19 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/18 15:34:46 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s1-ին կպցնում է s2-ը: malloc-ով տեղա հատկացնում, դնումա str-ի մեջ
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;//Hello //World
	size_t	j;
			  //01234
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));//10 + \0
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];//str[j++] = str[j]; j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);//contents of malloc(str) -> HelloWorld\0
}
