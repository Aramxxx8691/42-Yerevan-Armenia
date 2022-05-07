/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:57:12 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/17 19:43:08 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;//Hello
		  //01234
	i = 0;
	while (str[i])
		i++;// = 4
	while (i >= 0)
	{
		if (str[i] == (char)c)//search "l"
			return ((char *)(str + i));//Hell
		i--;//look previus i
	}
	return (0);
}
