/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:31:16 by igbocha3          #+#    #+#             */
/*   Updated: 2022/04/26 00:36:52 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*str;
	const char	ch = c;

	str = (char *)s;
	while (*str != ch)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
