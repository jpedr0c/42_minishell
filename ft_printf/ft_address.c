/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:31:35 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:31:41 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hex(unsigned long number)
{
	int	counter;

	counter = 0;
	while (number)
	{
		counter++;
		number /= 16;
	}
	return (counter);
}

static void	ft_ptr(unsigned long number)
{
	if (number >= 16)
	{
		ft_ptr(number / 16);
		ft_ptr(number % 16);
	}
	else
	{
		if (number <= 9)
			ft_putchar(number + 48);
		else
			ft_putchar(number - 10 + 'a');
	}
}

int	ft_address(unsigned long number)
{
	int	back;

	back = 0;
	if (!number)
		return (ft_putstr("0x0"));
	back += write(1, "0x", 2);
	if (number)
	{
		ft_ptr(number);
		back += ft_len_hex(number);
	}
	return (back);
}
