/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:19:59 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/23 21:23:33 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *fstr, ...);
int		ft_printf_c(char c);
int		ft_printf_s(char *s);
int		ft_printf_p(unsigned long int p);
int		ft_printf_d(double f);
int		ft_printf_i(long int i);
int		ft_printf_i_flag(long int i, char c);
int		ft_printf_u(unsigned long int u);
int		ft_printf_x(unsigned int x);
int		ft_printf_x_flag(unsigned int x);
int		ft_printf_upx(unsigned int upx);
int		ft_printf_upx_flag(unsigned int upx);
size_t	ft_tohex(size_t nbr, char option, int total);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int		ft_printf_format(char f, va_list args);
int		ft_printf_flags(const char *str, va_list args);
#endif
