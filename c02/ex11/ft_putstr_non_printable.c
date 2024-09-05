/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:16:28 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/22 19:10:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;
	char	letter[2];

	hex = "0123456789abcdefg";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			letter[0] = hex[(unsigned char)str[i] / 16];
			letter[1] = hex[(unsigned char)str[i] % 16];
			write(1, &letter[0], 1);
			write(1, &letter[1], 1);
		}
			i++;
	}
}
