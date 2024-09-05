/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:37:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/28 13:48:03 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
    char str1[] = "heeeeeee";
    char str2[] = "teste";
    unsigned int n = 5;

    int result = ft_strncmp(str1, str2, n);

        printf("result %d\n", result);

    return 0;
}*/
