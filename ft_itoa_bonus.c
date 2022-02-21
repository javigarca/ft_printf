/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:55:38 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 12:59:39 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_nbrlen(int nbr)
{
	int	z;

	z = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		z++;
	}
	if (nbr == 0)
		z++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		z++;
	}
	return (z);
}

static char	*ft_neg(int neg, int l)
{
	char	*aux;

	neg *= -1;
	aux = (char *) malloc(l + 1);
	if (!aux)
		return (NULL);
	aux[l] = '\0';
	while (l-- >= 1)
	{
		aux[l] = (neg % 10) + 48;
		neg = (neg / 10);
	}
	aux[0] = '-';
	free(aux);
	return (aux);
}

static char	*ft_pos(int pos, int l)
{
	char	*aux;

	aux = (char *) malloc(l + 1);
	if (!aux)
		return (NULL);
	aux[l] = '\0';
	while (l-- >= 1)
	{
		aux[l] = (pos % 10) + 48;
		pos = (pos / 10);
	}
	free(aux);
	return (aux);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;

	len = ft_nbrlen(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		itoa = ft_neg(n, len);
	else
		itoa = ft_pos(n, len);
	return (itoa);
}
