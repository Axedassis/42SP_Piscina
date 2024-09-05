/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 03:39:25 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/01 22:41:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "allheaders.h"

char	*ft_getnumber(int fd);
char	*ft_getvalue(int fd, char *c);

t_list *handle_file(char *file)
{
	int		fd;
	int		i;
	char	c[1];
	char	*tmp;
	t_list	*tab;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_list) * 33)

	i = 0;
	while (i < 32)
	{
		tab[i].numbers = ft_atoi(ft_getnumber(fd));
		while (read(fd, c, 1) && (c[0] == ' ' || c[0] == ':'));
		tmp = ft_getvalue(fd, c);
		tab[i].value = ft_strdup(tmp);
		free(tmp);
		i++;
	}

	close(fd);
	return (tab);
}


char	*ft_getvalue(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char *ft_getnumber(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

