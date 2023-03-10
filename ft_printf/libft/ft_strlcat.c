/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:38:36 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:38:38 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dest;
	size_t	i;
	size_t	j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	else if (size <= size_dest)
		return (size_src + size);
	else
	{
		i = 0;
		while (dest[i] && size--)
			i++;
		j = 0;
		while (src[j] && j < size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (size_src + size_dest);
}
