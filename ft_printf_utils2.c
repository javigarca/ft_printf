/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:51:12 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 13:03:17 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		return (ft_printf_i(va_arg(args, long int)));
	if (f == 'u')
		return (ft_printf_u(va_arg(args, unsigned long int)));
	if (f == 'x')
		return (ft_printf_x(va_arg(args, unsigned int)));
	if (f == 'X')
		return (ft_printf_upx(va_arg(args, unsigned int)));
	if (f == '%')
		return (ft_printf_c(f));
	return (total);
}
