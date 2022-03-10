/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:53:52 by javigarc          #+#    #+#             */
/*   Updated: 2022/03/10 11:53:54 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	va_list		args;
	int			total;

	total = 0;
	va_start (args, fstr);
	while (*fstr != 00)
	{
		if (*fstr == '%')
		{
			fstr++;
			total += ft_printf_flags(fstr, args);
			while ((*fstr == ' ') || (*fstr == '#') || (*fstr == '+'))
				fstr++;
		}
		else
			total += ft_printf_c(*fstr);
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
	int	total;

	total = 0;
	if (s)
	{
		while (*s)
		{
			total += ft_printf_c(*s);
			s++;
		}
	}
	else
		total = ft_printf_s("(null)");
	return (total);
}

int	ft_printf_p(unsigned long int p)
{
	int		total;

	total = 0;
	total += ft_printf_s("0x");
	if (p == 0)
		total += ft_printf_c('0');
	else
		total += ft_tohex(p, 'x', 0);
	return (total);
}
