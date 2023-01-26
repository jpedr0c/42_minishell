/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:39:25 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:39:26 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t	size_s1;
	char	*str;

	if (!s1 || !set)
		return ((void *)0);
	while (*s1)
	{
		if (ft_strchr(set, *s1))
			s1++;
		else
			break ;
	}
	size_s1 = ft_strlen((char *)s1);
	while (size_s1 && ft_strchr(set, s1[size_s1]))
		size_s1--;
	str = ft_substr((char *)s1, 0, size_s1 + 1);
	return (str);
}
