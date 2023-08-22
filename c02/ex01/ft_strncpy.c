/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:29:49 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 18:49:09 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ls;

	ls = dest;
	while (*src != '\0' && n)
	{
		*ls = *src;
		ls ++;
		src ++;
		n --;
	}
	while (n)
	{
		*ls = '\0';
		ls ++;
		n --;
	}
	return (dest);
}
/*
int	main(void)
{
	char *src1 = "string";
	char dest1[7];
	unsigned int n1 = 7;

	char *src2 = "12";
	char dest2[] = {'a', 'b', '\0'};
	unsigned int n2 = 1;

	char *src3 = "1";
	char dest3[] = {'1', '\0', 'a', 'b', '\0'};
	unsigned int n3 = 5;

	char *ret;
	char *cat;

	cat = strncpy(dest1, src1, n1);
	ret = ft_strncpy(dest1, src1, n1);
	printf("%s\n", ret);
	printf("%s\n", cat);

	ret = ft_strncpy(dest2, src2, n2);
	printf("%s\n", ret);

	ret = ft_strncpy(dest3, src3, n3);
	dest3[2] = 'a';
	printf("%s\n", (ret + 2));

	return (0);
}

int	main(void)
{
	char	dest[5] =  {'h', 'o', 'l', 'a', '\0'};
	char	src[5] = {'p', 'i', 'p', 'a', '\0'};
	int		e = 2;
	char	*s = ft_strncpy(dest, src, e);
	while(e >= 0)
	{
		write(1, s++, 1);
		e--;
	}
}*/
/*
#include <string.h>

int main(void)
{
    char fir[] = "hola soy guay";
    char sec[] = "ME DA IGUAL PRINGADA";
    unsigned int n;

    n =15;
    printf("normal:\n %s\n%s\n\n", fir, sec);
    ft_strncpy(sec, fir, n);
    printf("mia:\n %s\n%s\n\n", fir, sec);

	char afir[] = "hola soy guay";
    char asec[] = "PRINGADA";
    unsigned int an;

    an =15;
    strncpy(sec, fir, an);
    printf("buena\n: %s\n%s\n\n", afir, asec);
    return (0);	
}*/
