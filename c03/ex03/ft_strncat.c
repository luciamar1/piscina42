/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:28:48 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/30 02:27:07 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*a)
		a++;
	while (nb-- && *src)
	{
		*a = *src;
		a ++;
		src ++;
	}
	*a = '\0';
	return (dest);
}
/*
int main(void)
{
    char str1[20] = "";
    char str2[20] = "test";
    char str3[20] = "";
    char str4[20] = "test";
    char *s1 = ft_strncat(str2, str1, 5);
    char *s2 = strncat(str4, str3, 5);
    printf("this is from ft_strncat = %s\n", s1);
    printf("this is from strncat = %s\n", s2);
    return (0);
}


int main () {
	char src[50], dest[50], i[50];

	strcpy(src,  "This hoa pringada");
	strcpy(dest, "This");

	strncat(dest, src, 3);

	printf("Final destination string : |%s|", dest);

	ft_strncat(i, src, 3);

	printf("Final destination string : |%s|", dest);

	return(0);
}*/
