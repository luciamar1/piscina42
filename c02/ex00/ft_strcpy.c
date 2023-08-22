/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:20:46 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 19:58:38 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*des;

	des = dest;
	while (*src != '\0')
	{
		*des = *src;
		des ++;
		src ++;
	}
	*des = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[5] = {'h', 'o', 'l', 'a', 0};
	char    src[9] = {'p', 'r', 'i', 'n', 'g', 'a', 'd', 'a', 0};
	ft_strcpy(dest, src);
	printf("%c", dest[0]);
	printf("%c", dest[1]);
	printf("%c", dest[2]);
	printf("%c", dest[3]);
	printf("%c", dest[4]);
	return(0);
}*/
