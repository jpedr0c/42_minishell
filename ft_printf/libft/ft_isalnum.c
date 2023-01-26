/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:35:16 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:35:20 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	alpha;
	int	digit;

	alpha = ft_isalpha(c);
	digit = ft_isdigit(c);
	if (alpha == 1 || digit == 1)
		return (1);
	return (0);
}
