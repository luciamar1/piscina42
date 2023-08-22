/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:50:14 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 04:53:25 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	pasar(char *str)
{
	if ((*str >= 9 && *str <= 13) || (*str == 32))
		return (1);
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	cont;
	int	inta;

	cont = 1;
	inta = 0;
	while (*str)
	{
		if (pasar (str) == 1)
			str ++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				cont *= -1;
			str ++;
		}
		while ((*str <= '9') && (*str >= '0'))
		{
			inta = inta * 10 + (*str - '0');
			str ++;
			if (*str < '0' || *str > '9')
				return (cont * inta);
		}
		str ++;
	}
	return (0);
}	
/*
int	main(void)
{
	char a[32] = "+++++-a87232424";
	printf ("%d", atoi(a));
}*/
