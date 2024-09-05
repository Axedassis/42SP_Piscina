/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:49:44 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/21 12:58:56 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	if (! (*str))
		return (1);
	while (*str)
	{
		if (! (*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}
