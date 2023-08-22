/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:17:19 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 15:08:11 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
		i ++;
	}
	if (i == n)
		return (0);
	else
		return (*s1 - *s2);
}
/*
int	main(void)
{
	char    dest[20] = "pichurri";
	char    src[20] = "pichurri";
	
	char a = '0' + strncmp(dest, src, 0);
	write(1, &a, 1);
	char b = '0' + ft_strncmp(dest, src, 0);
	write(1, &b, 1);
}*/
