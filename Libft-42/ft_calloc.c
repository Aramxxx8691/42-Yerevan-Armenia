/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:12:00 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/15 19:51:29 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	str;
	void	*dest;

	str = count * size;
	dest = malloc(str);
	if (!dest)
		return (0);
	ft_memset(dest, 0, str);
	return (dest);
}
