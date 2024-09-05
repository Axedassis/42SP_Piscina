/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:42:18 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/19 19:21:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = nb * (-1);
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr (number / 10);
	}
	number = (number % 10) + 48;
	write(1, &number, 1);
}
