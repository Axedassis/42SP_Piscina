/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:35:23 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 12:20:29 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    // Testes com números positivos dentro do intervalo
    printf("Fatde 0: %d\n", ft_iterative_factorial(0));  // Esperado: 1
    printf("Fatde 1: %d\n", ft_iterative_factorial(1));  // Esperado: 1
    printf("Fatde 5: %d\n", ft_iterative_factorial(5));  // Esperado: 120
    printf("Fatde 9: %d\n", ft_iterative_factorial(10));  // Esperado: 362880

    return 0;
}*/