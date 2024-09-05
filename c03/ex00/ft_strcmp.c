/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:18:29 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/28 12:27:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*

int main()
{
	printf("EQual: %d\n", ft_strcmp("hello", "hello"));
	printf("different: %d\n", ft_strcmp("hello", "hella"));
	printf("s1(s2) < s2(s1): %d\n", ft_strcmp("hello", "he"));
	printf("s1(s2) > s2(s1): %d", ft_strcmp("hellooooo", "hello"));
}

*/