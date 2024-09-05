/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:37:09 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/20 14:24:39 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp_val;
	int		left_val;
	int		right_val;

	left_val = 0;
	right_val = size - 1;
	while (left_val < right_val)
	{
		tmp_val = tab[left_val];
		tab[left_val] = tab[right_val];
		tab[right_val] = tmp_val;
		left_val++;
		right_val--;
	}
}
