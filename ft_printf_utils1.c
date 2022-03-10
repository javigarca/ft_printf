/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:51:12 by javigarc          #+#    #+#             */
/*   Updated: 2022/03/10 12:20:20 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(int i)
{
	char	*str;
	int		z;

	z = 0;
	if (i == -2147483648)
		z = ft_printf_s("-2147483648");
	else
	{
		str = ft_itoa(i);
		z = ft_printf_s(str);
		free(str);
	}
	return (z);
}

int	ft_printf_u(unsigned int i)
{
	char			*str;
	int				z;

	z = 0;
	str = ft_utoa(i);
	z = ft_printf_s(str);
	free(str);
	return (z);
}

size_t	ft_tohex(size_t nbr, char option, int total)
{
	char	*base;
	char	*upbase;

	base = "0123456789abcdef";
	upbase = "0123456789ABCDEF";
	if (nbr > 0)
	{
		if (option == 'x')
		{
			total += ft_tohex(nbr / 16, 'x', total);
			total += ft_printf_c(base[nbr % 16]);
		}
		if (option == 'X')
		{
			total += ft_tohex(nbr / 16, 'X', total);
			total += ft_printf_c(upbase[nbr % 16]);
		}
	}
	return (total);
}

int	ft_printf_x(unsigned int nbrx)
{
	int	total;

	total = 0;
	if (nbrx == 0)
		total += ft_printf_c('0');
	else
	total += ft_tohex(nbrx, 'x', total);
	return (total);
}

int	ft_printf_upx(unsigned int nbrupx)
{
	int	total;

	total = 0;
	if (nbrupx == 0)
		total += ft_printf_c('0');
	else
		total += ft_tohex(nbrupx, 'X', total);
	return (total);
}
