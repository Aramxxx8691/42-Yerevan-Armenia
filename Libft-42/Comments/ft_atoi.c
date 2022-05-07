/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:53:10 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/17 19:48:04 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//str to int
int	ft_atoi(const char *str)
{
	int	i; //123
	int	j;
	int	res;

	i = 0;
	j = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r') //non-printing characters
		i++;
	if (str[i] == '+' || str[i] == '-') //+123/-123 -> put + or - to int
	{
		if (str[i] == '-')
			j = -1;
		i++; //next index (1)
	}
	while (str[i] >= '0' && str[i] <= '9')//check if isdigit
	{
		res = (str[i] - '0') + (res * 10);//'0'(48 ascii number)
		i++;
	}
	return (res * j);//j + or -
}
