/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 02:56:41 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/06/01 03:51:52 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb)
		x *= nb--;
	return (x);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(0));    
    return (0);
}
*/
