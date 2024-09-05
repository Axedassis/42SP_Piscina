/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:39:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/01 22:24:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "allheaders.h"

void	ft_print(int n, t_list *tab, int *first);

void	ft_print(int n, t_list *tab, int *first)
{
	int		i;
	int		mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].numbers != mult)
		i++;
	ft_putstr(tab[i].value);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	getdec(int nb)
{
	if (nb >= 20)
		return ((nb / 10) * 10);
	else
		return (nb);
}

int	getmult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int	main(int argc, char *argv[])
{
	t_list	*tab;
	int		int_argv;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (argc != 2 || ft_atoi(argv[1]) < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	int_argv = ft_atoi(argv[1]);
	tab = handle_file("../numbers.dict");
	ft_print(ft_atoi(argv[1]), tab, first);
	return (0);
}
