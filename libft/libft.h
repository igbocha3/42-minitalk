/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:29:07 by igbocha3          #+#    #+#             */
/*   Updated: 2022/04/26 00:48:38 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_put_c(char c);
int		ft_put_s(char *s);
int		ft_put_p(unsigned long long p);
int		ft_put_d(int d);
int		ft_put_u(unsigned int u);
int		ft_put_x(long long int x, char c);
int		ft_len_d(long long d);
int		ft_len_x(unsigned long long d);
int		ft_printf(const char *str, ...);

#endif