/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:54:19 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/22 19:05:21 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	if (! (*str))
		return (1);
	while (*str)
	{
		if (! (*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
