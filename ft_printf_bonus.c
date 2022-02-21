/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:53:52 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 13:24:49 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printf(const char *fstr, ...)
{
	va_list		args;
	int			total;
	Strtoprint	Spf;

	total = 0;
	va_start (args, fstr);
	while (*fstr != 00)
	{
		if (*fstr == '%')
		{
			fstr++;
			total += ft_printf_flags(*fstr, args, Spf);
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
	int	i;

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
		i = ft_printf_s("(null)");
	return (i);
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
