/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:51:12 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 13:03:17 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_printf_i(int i)
{
	char	*str;
	int		z;

	z  = 0;
	str = ft_itoa(i);
	z = ft_printf_s(str);
	return (z);
}

int	ft_printf_u(unsigned int i)
{
	char			*str;
	int				z;

	z  = 0;
	str = ft_utoa(i);
	z = ft_printf_s(str);
	return (z);
}

