/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:41:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 12:29:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return ('\0');
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
int main(void)
{
    // Testes com números positivos
    printf("Fatde 0: %d\n", ft_recursive_factorial(0));  // Esperado: 1
    printf("Fatde 1: %d\n", ft_recursive_factorial(1));  // Esperado: 1
    printf("Fatde 5: %d\n", ft_recursive_factorial(5));  // Esperado: 120
    printf("Fatde 9: %d\n", ft_recursive_factorial(9));  // Esperado: 362880

    return 0;
}*/