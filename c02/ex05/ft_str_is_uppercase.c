/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:59:36 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/21 13:01:44 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	if (! (*str))
		return (1);
	while (*str)
	{
		if (! (*str >= 65 && *str <= 90))
			return (0);
		str++;
	}
	return (1);
}
