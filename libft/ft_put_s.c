/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:50:11 by igbocha3          #+#    #+#             */
/*   Updated: 2022/04/26 00:36:46 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Строка символов

#include "libft.h"

int	ft_put_s(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		ft_put_c(s[i++]);
	return (i);
}
