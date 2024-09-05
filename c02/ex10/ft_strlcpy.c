/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:37:35 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/23 19:23:50 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		src_size;
	unsigned int		i;

	src_size = 0;
	i = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
