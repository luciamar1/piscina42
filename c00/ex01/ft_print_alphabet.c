/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:46:15 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/05/15 21:25:14 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 96;
	while (a++ < 'z' )
		write(1, &a, 1);
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
