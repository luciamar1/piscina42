/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:23:03 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/16 16:42:58 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(char a)
{
	write(1, &a, 1);
}

void	ft_ic(int a)
{
	ft_putint('0' + a / 10);
	ft_putint('0' + a % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = a + 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_ic(a);
			write(1, " ", 1);
			ft_ic(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b ++;
		}
		a++;
		b = a + 1;
	}	
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
