/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillermo <guillermo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:33:52 by guisanch          #+#    #+#             */
/*   Updated: 2023/07/06 13:20:11 by guillermo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(va_list arg, int *total_write)
{
	long long	i;

	i = va_arg(arg, int);
	ft_putchar(i);
	*total_write += 1;
}

void	ft_print_string(va_list arg, int *total_write)
{
	char	*str;

	str = va_arg(arg, char *);
	ft_putstr(str);
	*total_write += ft_strlen(str);
}

void	ft_print_int(va_list arg, char str, int *total_write)
{
	long long	i;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = i * -1;
		ft_putchar('-');
		*total_write += 1;
	}
	ft_putstr(convertidor(i, 10, str));
	*total_write += ft_count_num(i, 10);
}

void	ft_print_unsig_int (va_list arg, char str, int *total_write)
{
	long long	i;
	
	i = va_arg(arg, unsigned int);
	ft_putstr(convertidor((unsigned int)i, 10, str));
	*total_write += ft_count_num((unsigned long)i, 10);
}
