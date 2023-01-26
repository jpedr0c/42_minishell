/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:38:16 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:38:17 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*str;
	char	*p;

	size = ft_strlen(s) + 1;
	str = (char *)malloc(size * 1);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}
