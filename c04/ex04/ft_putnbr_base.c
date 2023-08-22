/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:48:48 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/31 16:56:05 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		base++;
		i++;
	}
	return (i);
}

int	bien(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	n;
	int				l;

	l = len(base);
	n = nb;
	if ((bien(base) != 0) || (l != 0 || l != 1))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n > l)
			ft_putnbr_base(n / l, base);
	}
	put_char(base[n % l]);
}
int main(void)
{
    ft_putnbr_base(5, "0123");
	return (0);
}
