/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiramos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:57:15 by wiramos-          #+#    #+#             */
/*   Updated: 2024/08/17 18:59:20 by wiramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_top_bottom(int column, int x);
void	rush(int x, int y);

void	rush(int x, int y)
{	
	int	column;
	int	line;

	if (x <= 0 || y <= 0 || x == '\0' || y == '\0')
		return ;
	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			if (line == 0 || line == (y - 1))
				ft_top_bottom(column, x);
			else
				if (column == 0 || column == (x - 1))
					ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	ft_top_bottom(int column, int x)
{
	if (column == 0)
		ft_putchar('A');
	else if (column == (x - 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}
