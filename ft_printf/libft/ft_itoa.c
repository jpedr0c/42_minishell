/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:36:23 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:36:25 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_number(int n);

char	*ft_itoa(int n)
{
	int		size;
	long	number;
	char	*s;

	size = size_number(n);
	number = n;
	s = malloc(size + 1);
	if (!s)
		return ((void *)0);
	if (number < 0)
	{
		s[0] = '-';
		number = -number;
	}
	if (number == 0)
		s[0] = '0';
	s[size--] = '\0';
	while (number)
	{
		s[size] = number % 10 + '0';
		size--;
		number = number / 10;
	}
	return (s);
}

static size_t	size_number(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}
