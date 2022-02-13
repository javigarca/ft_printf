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
/*
	ft_printf("\n***********************\n	CHARACTER\n************************\n");
	ft_printf("%c", '0');
	ft_printf(" %c ", '0');
	ft_printf(" %c", '0' - 256);
	ft_printf("%c ", '0' + 256);
	ft_printf(" %c %c %c ", '0', 0, '1');
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	ft_printf(" %c %c %c ", '1', '2', '3');
	ft_printf(" %c %c %c ", '2', '1', 0);
	ft_printf(" %c %c %c ", 0, '1', '2');

	ft_printf("\n***********************\n	STRING\n************************\n");

	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	ft_printf("%s", "");
	ft_printf(" %s", "");
	ft_printf("%s ", "");
	ft_printf(" %s ", "");
	ft_printf(" %s ", "-");
	ft_printf(" %s %s ", "", "-");
	ft_printf(" %s %s ", " - ", "");
	ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "); */
/*	totalmio =*/ //ft_printf(" NULL %s NULL ", NULL);
//	ft_printf("\n********************************************\n");
/*	totaloriginal = printf(" NULL %s NULL ", NULL);*/
//	printf("\nMio: %i || Orginal: %i", totalmio, totaloriginal);

/*	ft_printf("\n***********************\n	POINTER\n************************\n");

	ft_printf(" %p ", -1);
	ft_printf(" %p ", 1);
	ft_printf(" %p ", 15);
	ft_printf(" %p ", 16);
	ft_printf(" %p ", 17);
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	ft_printf(" %p %p ", INT_MIN, INT_MAX);
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p ", 0, 0);
	ft_printf("\n********************************************\n");
	printf(" %p ", (void *)-1);
	printf(" %p ", (void *)1);
	printf(" %p ", (void *)15);
	printf(" %p ", (void *)16);
	printf(" %p ", (void *)17);
	printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
	printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX);
	printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf(" %p %p ", (void *)0, (void *)0);


	ft_printf("\n***********************\n	INTEGER\n************************\n");
	ft_printf(" %i ", 0);
	ft_printf(" %i ", -1);
	ft_printf(" %i ", 1);
	ft_printf(" %i ", 9);
	ft_printf(" %i ", 10);
	ft_printf(" %i ", 11);
	ft_printf(" %i ", 15);
	ft_printf(" %i ", 16);
	ft_printf(" %i ", 17);
	ft_printf(" %i ", 99);
	ft_printf(" %i ", 100);
	ft_printf(" %i ", 101);
	ft_printf(" %i ", -9);
	ft_printf(" %i ", -10);
	ft_printf(" %i ", -11);
	ft_printf(" %i ", -14);
	ft_printf(" %i ", -15);
	ft_printf(" %i ", -16);
	ft_printf(" %i ", -99);
	ft_printf(" %i ", -100);
	ft_printf(" %i ", -101);
	ft_printf(" %i ", INT_MAX);
	ft_printf(" %i ", INT_MIN);
	ft_printf(" %i ", LONG_MAX);
	ft_printf(" %i ", LONG_MIN);
	ft_printf(" %i ", UINT_MAX);
	ft_printf(" %i ", ULONG_MAX);
	ft_printf(" %i ", 9223372036854775807LL);
	ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	*/

	int numero, numerop;

	numero = ft_printf(" %u ", -1);
	numerop = printf(" %u ", -1);

	printf("\n mio: %i --- pri: %i \n", numero, numerop);
	
	system ("leaks a.out");
	return (0);
}
