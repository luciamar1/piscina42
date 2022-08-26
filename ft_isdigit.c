/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:21:15 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/12 02:27:24 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
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
		if (!!ft_isprint(i) != !! isprint(i))
				printf("%d", i);
		printf("MAL");
		printf("%d,%d\n", ft_isprint(i), isprint(i));
		i++;
	}   
	printf("BIEN");
	return(0);
}
*/