/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:23:32 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/17 19:46:19 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int to char
static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)//give a place to "-"
		count++;
	while (n != 0)
	{
		n = n / 10;// 13/10=1 // 1/10=0
		count++;
	}
	return (count);//2
}

static size_t	my_abs(int n) //return only "+" int
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)//13
{
	char	*str;
	size_t	size;

	size = ft_count(n);// = 2
	str = (char *)malloc(sizeof(char) * (size + 1));//save 2 + \0
	if (str == 0)
		return (NULL);
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[--size] = my_abs(n % 10) + '0'; //13 % 10 = 3(ascii number) after + '0'(48 asacii number) to reach 3
		n /= 10;
	}
	return (str);
}
