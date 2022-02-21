/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:34:31 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/11 12:36:13 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
//	char c = 'b';
//	char *s = "clase";
/*	int totalmio, totaloriginal;

	totalmio = 0;
	totaloriginal = 0;*/
	printf("% i \n", 1);
	printf("%#x\n", -123);
	printf("%-80d\n", -99);
	printf("%.1f\n", -18.454);		
//	system ("leaks a.out");
	return (0);
}
