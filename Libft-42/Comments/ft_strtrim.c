/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:20:29 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 13:21:59 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//հեռացնում է s-ի սկզբից և վերջից set-ում առկա էլեմենտները:
char	*ft_strtrim(char const *s1, char const *set)
{							//{1Hello11}		{1}
	size_t	i;//9

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))//Hello11
		s1++;//go to end
	i = ft_strlen(s1);//=8
	while (i && ft_strchr(set, s1[i]))//Hello
		i--;//check to the front
	return (ft_substr(s1, 0, i + 1));
}
