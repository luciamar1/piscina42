/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:37:37 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/15 21:43:19 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 123;
	while (z-- > 'a')
		write(1, &z, 1);
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
