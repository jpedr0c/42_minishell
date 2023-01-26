/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:00:51 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/20 13:00:51 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 1;
	if (!lst)
	{
		printf("Lista nula\n");
		return (0);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
