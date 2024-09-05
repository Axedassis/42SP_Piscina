/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:39:52 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/25 21:13:45 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "func.h"
#include "board.h"

int	main(int argc, char *argv[])
{
	char	**board;
	int		i;

	board = NULL;
	board = ft_initialize_board(board);
	if (ft_parms_validation(argc, argv[1]) != 0
		|| ft_parms_identify(argv[1]) != 0 || ft_parms_boundarie(argv[1]) != 0)
	{
		i = 0;
		while (i < 6)
		{
			free(board[i]);
			i++;
		}
		write(1, "Error\n", 6);
		return (1);
	}
	ft_sort_board(argv[1], board);
	ft_print_board(board);
	return (0);
}
