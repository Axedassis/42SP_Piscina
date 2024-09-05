/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:42:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/25 21:13:23 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_initialize_board(char **board)
{
	int		j;
	int		i;

	j = 0;
	i = 0;
	board = malloc(6 * sizeof(char *));
	while (j < 6)
	{
		board[j] = malloc(6 * sizeof(char));
		j++;
	}
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}

void	ft_print_board(char **board)
{
	int		line;
	int		column;

	line = 1;
	while (line < 5)
	{
		column = 1;
		while (column < 5)
		{
			write(1, &board[line][column], 1);
			if (column < 4)
				write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}

int	ft_parms_validation(int s_args, char *labels)
{
	int		i;

	i = 0;
	if (s_args != 2)
		return (1);
	while (labels[i] != 0)
		i++;
	if (i != 31)
		return (1);
	return (0);
}

int	ft_parms_identify(char *labels)
{
	int		i;

	i = 0;
	while (i < 31)
	{
		if (labels[i] < 48 || labels[i] > 52)
		{
			if (labels[i + 1] != 32 && labels[i + 1] != '\0')
				return (1);
			return (1);
		}
		i += 2;
	}
	return (0);
}
