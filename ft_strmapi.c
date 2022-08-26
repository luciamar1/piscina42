/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:23:54 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/12 02:23:54 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char a)
{
	i = 0;
	a = 'a';
	return ('k');
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				l;
	char			*m;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	m = (char *)malloc((l + 1) * sizeof(char));
	if (!m)
		return (NULL);
	m[l] = 0;
	i = 0;
	while (i < (unsigned int)l)
	{
		m[i] = f(i, s[i]);
		i++;
	}
	return (m);
}

// int main(void)
// {
//     printf("%s", ft_strmapi("hola que tal", f));
//     return(0);
// }