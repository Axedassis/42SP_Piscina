/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:36:44 by lucas             #+#    #+#             */
/*   Updated: 2024/08/31 19:19:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
