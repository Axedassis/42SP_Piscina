/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allheaders.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:33:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/01 21:37:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLHEADERS_H
# define ALLHEADERS_H

typedef struct s_list
{
	int		numbers;
	char	*value;
}	t_list;

void	ft_print(int n, t_list *tab, int *first);
t_list	*handle_file(char *file);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
char	*ft_getnumber(int fd);
char	*ft_getvalue(int fd, char *c);
int		getmult(int nb);
int		getdec(int nb);

#endif
