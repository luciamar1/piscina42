/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:21:09 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/12 02:26:50 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}
/*
int main(void)
{
	int i;
 
   i = -1;
   while (i < 530)
   {
	  if (!!ft_isalpha(i) != !!isalpha(i))
				printf("%d", i);
			 printf("MAL");
			 printf("%d,%d\n", ft_isalpha(i), isalpha(i));
   i++;
}
	printf("BIEN");
}*/