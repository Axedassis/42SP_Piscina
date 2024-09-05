/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:54:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/03 20:20:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	result = nb;
	i = 0;
	while (i < (power - 1))
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int main(void)
{
    // Testes com bases e expoentes positivos
    printf("2^3 = %d\n", ft_iterative_power(2, 3));  // Esperado: 8
    printf("5^0 = %d\n", ft_iterative_power(5, 0));  // Esperado: 1
    printf("10^2 = %d\n", ft_iterative_power(10, 2));  // Esperado: 100

    // Testes com expoente zero
    printf("3^0 = %d\n", ft_iterative_power(3, 0));  // Esperado: 1

    // Testes com base zero e expoente positivo
    printf("0^5 = %d\n", ft_iterative_power(0, 5));  // Esperado: 0

    // Teste com base e expoente zero (comportamento definido)
    printf("0^0 = %d\n", ft_iterative_power(0, 0));  // Esperado: 1

    return 0;
}*/