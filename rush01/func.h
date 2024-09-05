/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:54:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/25 20:55:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H

char	**ft_initialize_board(char **board);
void	ft_print_board(char **board);
int		ft_parms_validation(int s_args, char *labels);
int		ft_parms_identify(char *labels);

#endif 