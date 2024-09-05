/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:02:03 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/22 19:09:34 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (! (*str))
		return (1);
	while (*str)
	{
		if (! (*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
