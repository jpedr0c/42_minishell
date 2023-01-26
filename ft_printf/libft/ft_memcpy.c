/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:36:47 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:36:49 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	dest1 = dest;
	src1 = src;
	i = 0;
	while (i < n)
	{
		*dest1++ = *src1++;
		i++;
	}
	return (dest);
}
