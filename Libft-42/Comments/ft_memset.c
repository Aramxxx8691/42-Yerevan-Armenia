/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:17:20 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 19:38:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//b տողի վրա գրում է c արժեքը len երկարությամբ (վերածվում է unsigned char-ի)
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;//Hello
			  //01234
	i = 0;
	while (i < len)//len = 3 c="w"
	{
		*(unsigned char *)(b + i) = (unsigned char)c;//give "w" to i=0
		i++;
	}
	return (b);//wwwlo
}
