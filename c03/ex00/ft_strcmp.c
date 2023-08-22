/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:10:26 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 02:28:12 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{	
		if ((*s1 > *s2) || (*s1 < *s2))
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	dest[9] = {'a', 'a', 'a', 'a', 0, 0, 0, 0, 0};
	char    src[7] = {'a', 'a', 'a', 'a', 0, 0, 0};
	char a = '0' + strcmp(dest, src);
	write(1, &a, 1);
	char b = '0' + ft_strcmp(dest, src);
	write(1, &b, 1);
}*/
