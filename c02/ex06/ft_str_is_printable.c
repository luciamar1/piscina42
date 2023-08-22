/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:32:23 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 19:59:49 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32)
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char a[1] = { '\0'};
	char z = '0' + ft_str_is_alpha(a);
	write(1, &z, 1);
	return (0);
}*/
