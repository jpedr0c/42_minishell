/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:38:23 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:38:24 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (s && f)
	{
		while (size > i)
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
