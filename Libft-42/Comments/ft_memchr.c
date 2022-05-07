/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:14:41 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 16:33:40 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//նայումա մեր *str-ում առաջին հանդիպած c արժեքը ու իրանից հետո վերադարձնումա իրան n երկարությամբ
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;//Hello world

	i = 0;
	while (i < n)//n=5 c="w"
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)// search "w"
			return ((void *)(str + i)); //give str from i
		i++;//world
	}
	return (0);
}
