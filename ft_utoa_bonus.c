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

static int	ft_nbrlen(unsigned int nbr)
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

static char	*ft_pos(unsigned int pos, int l)
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

char	*ft_utoa(unsigned int n)
{
	int		len;
	char	*utoa;

	len = ft_nbrlen(n);
	utoa = ft_pos(n, len);
	return (utoa);
}
