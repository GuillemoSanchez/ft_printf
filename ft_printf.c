/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanch <guisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:45:26 by guisanch          #+#    #+#             */
/*   Updated: 2023/07/07 12:08:16 by guisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convertidor(unsigned long long num, int base, char chr)
{
	char		*hex;
	static char	buffer[50];
	char		*str;

	hex = "0123456789abcdef";
	if (chr == 'X')
		hex = "0123456789ABCDEF";
	str = &buffer[49];
	*str = '\0';
	if (num == 0)
		*--str = hex[num % base];
	while (num != 0)
	{
		*--str = hex[num % base];
		num /= base;
	}
	return (str);
}

void	ft_parse_arg(char str, va_list arg, int *total_write)
{
	if (str == 'c')
		ft_print_char(arg, total_write);
	else if (str == 's')
		ft_print_string(arg, total_write);
	else if (str == 'd' || str == 'i')
		ft_print_int(arg, str, total_write);
	else if (str == 'u')
		ft_print_unsig_int(arg, str, total_write);
	else if (str == 'x' || str == 'X')
		ft_print_hexa(arg, total_write, str);
	else if (str == 'p')
		ft_print_pointer(arg, total_write, str);
	else
	{
		ft_putchar(str);
		*total_write += 1;
	}
}

int	ft_printf(char const *str, ...)
{
	va_list		arg;
	const char	*tmp;
	int			total_write;

	total_write = 0;
	va_start(arg, str);
	tmp = str;
	while (*tmp != '\0')
	{
		while (*tmp != '%')
		{
			if (*tmp == '\0')
			{
				return (total_write);
			}
			ft_putchar(*tmp);
			tmp++;
			total_write++;
		}
		tmp++;
		ft_parse_arg(*tmp, arg, &total_write);
		tmp++;
	}
	va_end(arg);
	return (total_write);
}
