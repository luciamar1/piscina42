/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:14 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 19:59:29 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str > 'Z' || *str < 'A')
			return (0);
		str++;
	}
	return (1);
}

/*
 26 int main(void)
 27 {
 28     char a[1] = {'\0'};
 29     char z = '0' + ft_str_is_alpha(a);
 30     write(1, &z, 1);
 31     return (0);
 32 }*/
