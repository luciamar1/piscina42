/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:23:01 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/12 02:23:02 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*aux;

	aux = b;
	while (len)
	{
		*aux = (char)c;
		aux++;
		len --;
	}
	return (b);
}
/*
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		argv ++;
		printf("%s", memset(*argv, 61, 5));
	}
	return (0);
}*/