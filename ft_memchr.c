/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:22:47 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/12 02:22:47 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s == (char)(c & 0xff))
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int main(void){
//     char r[] = {0, 1, 2 ,3 ,4 ,5};
//     char m[] = {0, 1, 2 ,3 ,4 ,5};
//     printf("real = %s\n", memchr(r, 3, 5));
//     printf("mia = %s\n", ft_memchr(m, 3, 5));
// }