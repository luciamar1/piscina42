/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:34:15 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/29 20:00:34 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	fv(char aux)
{
	if (aux <= 'z' && aux >= 'a')
		return (0);
	if (aux <= 'Z' && aux >= 'A')
		return (0);
	if (aux <= '9' && aux >= '0')
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux <= 'Z' && *aux >= 'A')
			*aux += 32;
		aux++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*aux;

	aux = str;
	ft_strlowcase(aux);
	if (*aux <= 'z' && *aux >= 'a')
		*aux -= 32;
	while (*aux)
	{
		while (aux[1] && fv(*aux) == 1)
		{
			aux++;
			if (*aux <= 'z' && *aux >= 'a')
				*aux -= 32;
		}
		if (*aux)
			aux++;
	}
	return (str);
}
/*
int	main()
{
	char s1[] = "hey ";
	char s2[] = "hEY ";
	char s3[] = " h EY ";
	char s4[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un+";
	char s5[] = " YY42       aB+";

	char *ret;

	ret = ft_strcapitalize(s1);
	printf("%s-%s\n", ret, s1);
	ret = ft_strcapitalize(s2);
	printf("%s-%s\n", ret, s2);
	ret = ft_strcapitalize(s3);
	printf("%s-%s\n", ret, s3);
	ret = ft_strcapitalize(s4);
	printf("%s-%s\n", ret, s4);
	ret = ft_strcapitalize(s5);
	printf("%s-%s\n", ret, s5);

	return (0);
}

int main(void)
{
	char a[8] = {'e', 'l', ' ', 'E', 'a', '+', 'a', '\0'};
	int i;
 	i =  0;
	printf("%s", ft_strcapitalize(a));
 	return (0);
}*/
