/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:25:59 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 13:20:34 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//նույնը ինչ strmapi-ին, սակայն malloc-ը տեղ չի հատկացնում քանի որ void-ա
void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int	i;//Hello
	int	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);// = 5
		while (j < i)
		{
			(*f)(j, s);//make changes
			s++;//next
			j++;//next
		}
	}
}
