/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:48:50 by igbocha3          #+#    #+#             */
/*   Updated: 2022/04/26 00:37:32 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Счетчик шестнадцатиричных

#include "libft.h"

int	ft_len_x(unsigned long long d)
{
	int	k;

	k = 1;
	while (d >= 16)
	{
		k++;
		d /= 16;
	}
	return (k);
}
