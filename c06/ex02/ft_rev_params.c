/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:45:03 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/06/01 21:16:24 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc >= 2)
	{
		while (argc - 1)
		{
			while (argv[argc - 1][j])
			{
				write(1, &argv[argc -1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			argc--;
			j = 0;
		}
	}
	return (0);
}
