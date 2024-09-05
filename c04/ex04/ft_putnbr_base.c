/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:57:54 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/31 20:11:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		base_verify(char *base);
void	fill_ascii(char *ascii);

void	ft_putnbr_base(int nbr, char *base)
{
	int		s_base;

	s_base = base_verify(base);
	if (s_base == 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = (unsigned int)-nbr;
	}
	if (nbr >= s_base)
	{
		ft_putnbr_base(nbr / s_base, base);
		ft_putnbr_base(nbr % s_base, base);
	}
	else
		write(1, &base[nbr], 1);
}

int	base_verify(char *base)
{
	int		s_base;
	char	ascii[256];
	int		tracker;

	tracker = 0;
	s_base = 0;
	fill_ascii(ascii);
	if (! (*base))
		return (1);
	while (base[s_base] != '\0')
	{
		if (base[s_base] == '+' || base[s_base] == '-')
			return (1);
		s_base++;
	}
	if (s_base <= 1)
		return (1);
	while (*base)
	{
		ascii[(unsigned char)base[tracker]]++;
		if (ascii[(unsigned char)base[tracker]] > 1)
			return (1);
		base++;
	}
	return (s_base);
}

void	fill_ascii(char *ascii)
{
	int		i;

	i = 0;
	while (i != 256)
	{
		ascii[i] = 0;
		i++;
	}
}
