/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:51:12 by javigarc          #+#    #+#             */
/*   Updated: 2022/03/10 12:29:27 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i_flag(int i, char c)
{
	char	*str;
	int		z;

	z = 0;
	if (i == -2147483648)
		z = ft_printf_s("-2147483648");
	else
	{
		str = ft_itoa(i);
		if (*str != '-')
			z += ft_printf_c(c);
		z += ft_printf_s(str);
		free(str);
	}
	return (z);
}

int	ft_printf_flags(const char *str, va_list args)
{
	char	flag;
	int		total;

	total = 0;
	flag = *str;
	while ((flag == ' ') || (flag == '+'))
	{
		str++;
		if ((*str == 'i') || (*str == 'd'))
			return (ft_printf_i_flag(va_arg(args, int), flag));
		if (*str == 's')
			return (ft_printf_s(va_arg(args, char *)));
	}
	while (flag == '#')
	{
		str++;
		if (*str == 'x')
			return (ft_printf_x_flag(va_arg(args, unsigned int)));
		if (*str == 'X')
			return (ft_printf_upx_flag(va_arg(args, unsigned int)));
	}
	return (ft_printf_format(*str, args));
}

int	ft_printf_format(char f, va_list args)
{
	int		total;

	total = 0;
	if (f == 'c')
		return (ft_printf_c(va_arg(args, int)));
	if (f == 's')
		return (ft_printf_s(va_arg(args, char *)));
	if (f == 'p')
		return (ft_printf_p(va_arg(args, unsigned long int)));
	if ((f == 'i') || (f == 'd'))
		return (ft_printf_i(va_arg(args, int)));
	if (f == 'u')
		return (ft_printf_u(va_arg(args, unsigned int)));
	if (f == 'x')
		return (ft_printf_x(va_arg(args, unsigned int)));
	if (f == 'X')
		return (ft_printf_upx(va_arg(args, unsigned int)));
	if (f == '%')
		return (ft_printf_c(f));
	return (total);
}

int	ft_printf_x_flag(unsigned int nbrx)
{
	int	total;

	total = 0;
	if (nbrx == 0)
		total += ft_printf_c('0');
	else
	{
		total += ft_printf_s("0x");
		total += ft_tohex(nbrx, 'x', 0);
	}
	return (total);
}

int	ft_printf_upx_flag(unsigned int nbrupx)
{
	int	total;

	total = 0;
	if (nbrupx == 0)
		total += ft_printf_c('0');
	else
	{
		total += ft_printf_s("0X");
		total += ft_tohex(nbrupx, 'X', 0);
	}
	return (total);
}
