/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:35:07 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:35:09 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totaloc;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	totaloc = nmemb * size;
	if (totaloc / nmemb != size)
		return ((void *)0);
	ptr = malloc(totaloc);
	if (ptr)
		ft_bzero(ptr, totaloc);
	return (ptr);
}
