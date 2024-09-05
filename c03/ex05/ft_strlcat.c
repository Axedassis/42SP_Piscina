/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/28 13:52:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		s_src;
	unsigned int		s_dest;
	unsigned int		i;

	s_src = 0;
	s_dest = 0;
	while (dest[s_dest] != '\0')
		s_dest++;
	while (src[s_src] != '\0')
		s_src++;
	if (size <= s_dest)
	{
		return (size + s_src);
	}
	i = 0;
	while (src[i] != '\0' && (s_dest + i) < (size - 1))
	{
		dest[s_dest + i] = src[i];
		i++;
	}
	dest[s_dest + i] = '\0';
	return (s_dest + s_src);
}
/*
int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World";
    unsigned int size = 15;
    unsigned int result;

    result = ft_strlcat(dest, src, size);

    printf("Resulting string: '%s'\n", dest);
    printf("Length of attempted concatenation: %u\n", result);

    return 0;
}*/
