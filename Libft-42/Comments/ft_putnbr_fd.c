/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:30:39 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/09 16:40:37 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//put number in lala.txt file
void	ft_putnbr_fd(int n, int fd)

{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			c = n + '0';
			write (fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			c = (n % 10) + '0';
			write (fd, &c, 1);
		}
	}
}

int	main(void)
{
    int a;
    a = -6545645;
	int fd = open("lala.txt", O_RDWR);
	ft_putnbr_fd(a, fd);
}
