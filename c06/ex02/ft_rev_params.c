/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 01:39:48 by lucas             #+#    #+#             */
/*   Updated: 2024/09/04 19:17:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	i = argc;
	while (i > 1)
	{
		if (i != argc)
			write(1, "\n", 1);
		while (*argv[i - 1] != '\0')
		{
			write(1, argv[i - 1], 1);
			argv[i - 1]++;
		}
		i--;
	}
	if (argc != 1)
	{
		write(1, "\n", 1);
	}
	return (0);
}
