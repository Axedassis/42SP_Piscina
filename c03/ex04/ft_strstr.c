/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:53:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/28 13:49:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	int		s_find;

	j = 0;
	s_find = 0;
	if (!(*to_find))
		return (str);
	while (to_find[s_find] != '\0')
		s_find++;
	while (*str)
	{
		if (ft_strncmp(str, to_find, s_find) == 0)
			return (str);
		str++;
	}
	return (0);
}

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
    char str1[] = "Hello, World!";
    char to_find1[] = "World";
    char to_find2[] = "42";
    char to_find3[] = "";
    char to_find4[] = "Hello";
    char to_find5[] = "ld!";

    // Teste 1: Substring presente no meio
    char *result1 = ft_strstr(str1, to_find1);
    printf("Test 1 - Expected: World! | Result: %s\n", result1);

    // Teste 2: Substring não presente
    char *result2 = ft_strstr(str1, to_find2);
    printf("Test 2 - Expected: (null) | Result: %s\n", result2);

    // Teste 3: Substring vazia
    char *result3 = ft_strstr(str1, to_find3);
    printf("Test 3 - Expected: Hello, World! | Result: %s\n", result3);

    // Teste 4: Substring igual ao início da string
    char *result4 = ft_strstr(str1, to_find4);
    printf("Test 4 - Expected: Hello, World! | Result: %s\n", result4);

    // Teste 5: Substring no final da string
    char *result5 = ft_strstr(str1, to_find5);
    printf("Test 5 - Expected: ld! | Result: %s\n", result5);

    return 0;
}*/
