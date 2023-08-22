/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:20:09 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/24 13:51:44 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	s;

	a = 0;
	while (a < size)
	{
		i = a + 1;
		while (i < size)
		{
			if (tab[a] > tab[i])
			{
				s = tab[a];
				tab[a] = tab[i];
				tab[i] = s;
			}
			i++;
		}
		a++;
	}	
}
/*
int	main(void)
{
	int size;
	size = 5;
	int	tab[5] = {1,5,2,3,-56};
	ft_sort_int_tab(tab, size);
	write(1, tab, 5);
	return(0);
}*/
