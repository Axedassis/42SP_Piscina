/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:46:31 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 13:53:44 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	// Testes com números positivos
	printf(" primo após 3: %d\n", ft_find_next_prime(3));   // Esperado: 3
	printf(" primo após 8: %d\n", ft_find_next_prime(8));   // Esperado: 11
	printf(" primo após 13: %d\n", ft_find_next_prime(13)); // Esperado: 13
	printf(" primo após 17: %d\n", ft_find_next_prime(17)); // Esperado: 17
	printf(" primo após 20: %d\n", ft_find_next_prime(20)); // Esperado: 23

	// Testes com números negativos e 0
	printf(" primo após -10: %d\n", ft_find_next_prime(-10)); // Esperado: 2
	printf(" primo após 0: %d\n", ft_find_next_prime(0));   // Esperado: 2

	return (0);
}*/