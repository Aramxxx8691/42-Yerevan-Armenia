/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:41:02 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/17 19:41:45 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)//համեմատումա str1-ը ու str2-ը, նշելով քանի բայթա համեմատում, աշխատում է միայն char-ով:
{
	size_t	i;//s1 Hello s2 Helloo
				 //01234	012345
	if (n == 0)
		return (0);
	i = 0;// n = 5
	while (s1[i] == s2[i] && s1[i] != '\0')//check if s1 = s2
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i])); //if 1>2 = + 1<2 = - 1=2 = 0		s1 < s2 -111
}
