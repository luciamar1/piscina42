/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:19:00 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 20:00:13 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux <= 'Z' && *aux >= 'A')
			*aux += 32;
		aux++;
	}
	return (str);
}
/*
 29 int main(void)
 30 {
 31     char a[3] = {'2', 'i', '\0'};
 32     ft_strupcase(a);
 33     int i;
 34     i =  0;
 35     while(i <= 3)
 36         write(1, &a[i++], 1);
 37     return (0);
 38 }*/
