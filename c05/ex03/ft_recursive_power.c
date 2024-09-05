/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:11:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/03 20:27:17 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power == 1)
		return (nb);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
    // Testes com bases e expoentes positivos
printf("2^3 = %d\n", ft_recursive_power(2, 3));  // Esperado: 8
printf("5^0 = %d\n", ft_recursive_power(5, 0));  // Esperado: 1
printf("10^2 = %d\n", ft_recursive_power(10, 2));  // Esperado: 100

// Testes com base zero e expoente positivo
printf("0^5 = %d\n", ft_recursive_power(0, 5));  // Esperado: 0

// Teste com expoente negativo
printf("2^-3 = %d\n", ft_recursive_power(2, -3));  // Esperado: 0 (não suportado)

    return 0;
}*/
