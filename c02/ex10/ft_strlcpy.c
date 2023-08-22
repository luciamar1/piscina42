/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:13:52 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 20:03:26 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	len(char	*src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (*src == '\0')
		return (0);
	if (size == 0)
		return (len(src));
	size--;
	while (size != '\0' || *src)
	{
		*dest = *src;
		dest ++;
		src ++;
		size --;
		i ++;
	}
	*dest = '\0';
	return (i);
}
/*
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int	main()
{
	char s[] = "1234567";
	char d[8];
	int i = 0;
	int x = strlcpy(d, s, 5);
	i = ft_strlcpy(d, s, 5);
//	printf("%s\n", s);
//	printf("%s\n", d);
	printf("%d\n", i);
	printf("%d\n", x);
//	i = ft_strlcpy(d, s, 0);
//	printf("%s\n", d);
//	printf("%d\n", i);

	return (0);
}*/

int main()              {

    char src[]="1234567890";
    char dest[50];
    int cont=0;
    int cantCopiada=ft_strlcpy(dest, src,45);

    while (dest[cont] != '\0')
    {
        printf("%c", dest[cont]);
        cont++;
    }

    printf("\nSe han copiado %d caracteres ",cantCopiada);
    return 0;
}
