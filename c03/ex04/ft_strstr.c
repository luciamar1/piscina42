/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 06:33:56 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 15:04:43 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	m;
	int	f;

	m = 0;
	f = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[m])
	{
		while (to_find[f] == str[m + f] && to_find[f])
		{
			f ++;
			if (to_find[f] == '\0')
				return (&str[m]);
		}
		m ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *c = "hola que tal deberias de mimir mas";
	char *f = "deberias";
	printf("%s\n", ft_strstr(f, c));
	printf("%s\n", strstr(f, c));
}*/
