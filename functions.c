/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanch <guisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:47:38 by guisanch          #+#    #+#             */
/*   Updated: 2023/07/05 15:16:18 by guisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i]);
		i++;
	}
}
