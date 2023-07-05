/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanch <guisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:45:26 by guisanch          #+#    #+#             */
/*   Updated: 2023/07/05 15:32:28 by guisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_arg(char str, va_list a)
{
	if (str == 'c')
		
	else if (str == 's')

	else if (str == 'p')

	else if (str == 'd')

	else if (str == 'i')
	
	else if (str == 'u')

	else if (str == 'x' || str == 'X')

	else
		ft_putchar_fd(str);
}

int	ft_printf(char const *str, ...)
{
	va_list	a;
	char	*tmp;

	tmp = str;

	while (*tmp != "\0")
	{
		while (*tmp != '%')
		{
			ft_putchar_fd(*tmp);
		}
	}
}
