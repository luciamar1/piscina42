/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:50:13 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/25 18:34:08 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	a;

	i = 0;
	while (i < size)
	{
		a = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = a;
		i++;
		size--;
	}
	return (tab);
}
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 4);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}*/
