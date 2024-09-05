/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:41:53 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/26 15:32:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		can_cap;

	can_cap = 1;
	ptr = str;
	while (*str)
	{
		if (!(*str < 97 || *str > 122) && can_cap == 1)
		{
			*str -= 32;
			can_cap = 0;
		}
		else if (!(*str < 65 || *str > 90) && can_cap == 0)
			*str += 32;
		else if (((*str < 97 || *str > 122)
				&& (*str < 65 || *str > 90)
				&& (*str < 48 || *str > 57)))
			can_cap = 1;
		else
			can_cap = 0;
		str++;
	}
	return (ptr);
}
