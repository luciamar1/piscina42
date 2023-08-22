/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:51:53 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 20:13:52 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux <= 'z' && *aux >= 'a')
			*aux -= 32;
		aux++;
	}
	return (str);
}
/*
int main(void)
{
	char a[3] = {'2', 'i', '\0'};
 	ft_strupcase(a);
	int i;
	i =  0;
	while(i <= 3)
		write(1, &a[i++], 1);
 	return (0);
}*/
