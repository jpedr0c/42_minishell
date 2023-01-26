/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:39:17 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:39:18 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*count;

	count = 0;
	while (*s)
	{
		if (*s == (char)c)
			count = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (count);
}
