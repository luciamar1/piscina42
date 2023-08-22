/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:55:28 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 14:29:36 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*a)
		a++;
	while (*src)
	{
		*a = *src;
		a ++;
		src ++;
	}
	*a = '\0';
	return (dest);
}
/*
int main () {
   char src[50], dest[6], i[5];

   strcpy(src,  "This hoa pringada");
   strcpy(dest, "This");

   //strcat(dest, src);

   //printf("Final destination string : |%s|", dest);

   ft_strcat(i, src);

   printf("Final destination string : |%s|", dest);

   return(0);
}*/
