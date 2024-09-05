/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:06:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/03 20:20:34 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_check(int n, int number);

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_check(1, nb));
}

int	ft_check(int n, int number)
{
	if (n * n == number)
		return (n);
	if (n * n > number)
		return (0);
	return (ft_check(n + 1, number));
}

/*
int	main(void)
{
	printf("resultado: %d\n", ft_sqrt(4));
	printf("resultado: %d\n", ft_sqrt(9));
	printf("resultado: %d\n", ft_sqrt(36));
	printf("resultado: %d\n", ft_sqrt(64));
	printf("resultado: %d\n", ft_sqrt(49));
	printf("resultado: %d\n", ft_sqrt(25));
	return (0);
}
*/