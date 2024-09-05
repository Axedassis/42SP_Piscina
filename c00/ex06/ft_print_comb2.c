/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:09:33 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/17 15:40:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	comb[5];
	int		left;
	int		right;

	left = 0;
	right = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			comb[0] = '0' + (left / 10);
			comb[1] = '0' + (left % 10);
			comb[2] = ' ';
			comb[3] = '0' + (right / 10);
			comb[4] = '0' + (right % 10);
			write(1, comb, 5);
			right++;
			if (!(left >= 98 && right >= 99))
			{
				write(1, ", ", 2);
			}
		}
		left++;
	}
}
