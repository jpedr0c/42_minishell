/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:33:37 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:33:39 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_printf(const char *format, ...);
int		ft_nbr_u(unsigned int n);
int		ft_address(unsigned long ptr);
int		ft_hex(unsigned int number, char *base);

#endif
