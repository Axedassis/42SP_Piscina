/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:49:42 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/25 20:50:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_parms_boundarie(char*labels)
{
	int		column;
	int		line;
	int		x;
	int		j;

	column = 0;
	line = 0;
	while (column < 4)
	{
		x = labels[(column * 2)] - '0';
		j = labels[((column * 2) + 8)] - '0';
		if ((x + j) < 2 || (x + j) > 5)
			return (1);
		column++;
	}
	while (line < 4)
	{
		x = labels[(line * 2) + 16] - '0';
		j = labels[(line * 2) + 24] - '0';
		if ((x + j) < 2 || (x + j) > 5)
			return (1);
		line++;
	}
	return (0);
}

void	ft_sort_board(char *labels, char **board)
{
	int		column;
	int		line;

	column = 1;
	line = 1;
	while (column < 5)
	{
		board[0][column] = labels[((column - 1) * 2)];
		board[5][column] = labels[(((column - 1) * 2) + 8)];
		column++;
	}
	while (line < 5)
	{
		board[line][0] = labels[((line - 1) * 2) + 16];
		board[line][5] = labels[((line - 1) * 2) + 24];
		line++;
	}
}
