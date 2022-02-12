/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:53:52 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 13:24:49 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *fstr, ...)
{
	va_list		args;
	char		fchar;
	int	total;

	total = 0;
	va_start (args, fstr);
	while (*fstr != 00)
	{
		if (*fstr == '%')
		{
			fstr++;
			fchar = *fstr;
			if (fchar == 'c')
				total += ft_printf_c(va_arg(args, int));
			if (fchar == 's')
				total += ft_printf_s(va_arg(args, char *));
			if (fchar == 'p')
				total += ft_printf_p(va_arg(args, void *));
			if (fchar == 'i')
				total += ft_printf_i(va_arg(args, int));
	/*		if (fchar == 'd')
				ft_printf_d(va_arg(args, double));
			if (fchar == 'u')
				ft_printf_u(va_arg(args, unsigned int));
			if (fchar == 'x')
				ft_printf_x(va_arg(args, int));
			if (fchar == 'X')
				ft_printf_X(va_arg(args, int)); */
			if (*fstr == '%')
				total +=ft_printf_c(fchar);
		}
		else
		{
			fchar = *fstr;
			total +=ft_printf_c(fchar);
		}
		fstr++;
	}
	va_end(args);
	return (total);
}

int	ft_printf_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_s(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (*s)
		{
			ft_printf_c(*s);
			s++;
			i++;
		}
	}
	else
		i = ft_printf_null();
	return (i);
}

int	ft_printf_p(void *p)
{
	char	*addstr;
	int		addint;
	int		i;

	i = 0;
	addint = (int) &p;	
	addstr = ft_itoa(addint);
	i = ft_printf_s(addstr);
	return (i);
}

int	ft_printf_null(void)
{
	int i;

	i = 0;
	i += ft_printf_c('(');
	i += ft_printf_c('n');
	i += ft_printf_c('u');
	i += ft_printf_c('l');
	i += ft_printf_c('l');
	i += ft_printf_c(')');
	return (6);
}
