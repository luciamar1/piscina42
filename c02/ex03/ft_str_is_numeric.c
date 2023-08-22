/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:45:50 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 19:59:03 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char a[3] = {'A', 'A', '\0'};
 	char z = '0' + ft_str_is_alpha(a);
 	write(1, &z, 1);
 	return (0);
 }*/
