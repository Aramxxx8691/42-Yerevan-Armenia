/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:27:51 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 19:34:38 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//put char in lala.txt file
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

int main()
{
	int fd = open("lala.txt", O_RDWR, 0644);
	ft_putchar_fd('b', fd);
	printf("fd=%d\n", fd);
	return(0);
}