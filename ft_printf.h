/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanch <guisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:52:10 by guisanch          #+#    #+#             */
/*   Updated: 2023/07/12 21:30:48 by guisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
void	ft_parse_arg(char str, va_list arg, int *total_write);
void	ft_print_char(va_list arg, int *total_write);
void	ft_print_string(va_list arg, int *total_write);
void	ft_print_int(va_list arg, char str, int *total_write);
void	ft_print_unsig_int(va_list arg, char str, int *total_write);
void	ft_print_hexa(va_list arg, int *total_write, char str);
void	ft_print_pointer(va_list arg, int *total_write, char str);
int		ft_count_num(unsigned long long number, int base);
char	*convertidor(unsigned long long num, int base, char chr);
int		ft_printf(char const *str, ...);

#endif