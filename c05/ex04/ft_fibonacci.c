/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:18:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/03 20:20:02 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int main(void)
{
    // Testes com índices positivos
    printf("Fibonacci de 0: %d\n", ft_fibonacci(0));  // Esperado: 0
    printf("Fibonacci de 1: %d\n", ft_fibonacci(1));  // Esperado: 1
    printf("Fibonacci de 5: %d\n", ft_fibonacci(5));  // Esperado: 5
    printf("Fibonacci de 10: %d\n", ft_fibonacci(10)); // Esperado: 55
    return 0;
}*/
