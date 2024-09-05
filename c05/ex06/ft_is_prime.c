/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:20:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 12:42:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i <= nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("result: %d\n", ft_is_prime(4)); // 0
	printf("result: %d\n", ft_is_prime(5)); // 1
	printf("result: %d\n", ft_is_prime(9)); // 0
	printf("result: %d\n", ft_is_prime(11)); // 1
	printf("result: %d\n", ft_is_prime(12)); // 0
	printf("result: %d\n", ft_is_prime(83)); // 1
	return(0);
}*/