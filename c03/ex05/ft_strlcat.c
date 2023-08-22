/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 07:35:52 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 15:07:55 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*a;
	unsigned int	i;

	a = dest;
	i = 0;
	while (*a)
	{
		a++;
		i ++;
	}
	while (*src && size)
	{
		*a = *src;
		a ++;
		src ++;
		i ++;
		size --;
	}	
	*a = '\0';
	return (i);
}
/*
int main(void)
{
	char a[50] = "hola";
	char b[50] =  "que tal";
	printf("%lu", strlcat(a, b, 3));
	printf("%s", b);
	printf("%s", a);	

	char n[50] = "hola";
	char i[50] =  "que tal";
	printf("%u", ft_strlcat(n, i, 3));
	printf("%s", b);
	printf("%s", a);
}*/
