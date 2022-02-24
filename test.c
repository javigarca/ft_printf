/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:34:31 by javigarc          #+#    #+#             */
/*   Updated: 2022/02/24 14:19:47 by javigarc         ###   ########.fr       */
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
	totaloriginal = 0;
//	printf("% i \n", 1);
//	printf("%#x\n", -123);
//	printf("%#X\n", -99);
//	printf("%+d\n", -18454);		
//	printf("%+d\n", 18);		
	ft_printf("*********************\n");
totalmio+=ft_printf("% imas\n", 1);
totalmio+=ft_printf("% imas\n", -1);
totalmio+=ft_printf("%#xmas\n", -123);
totalmio+=ft_printf("%#Xmas\n", -99);
totalmio+=ft_printf("%+dmas\n", -18454);		
totalmio+=ft_printf("%+dmsa\n", 18);		
	ft_printf("*********************\n");
//	ft_printf("%imas\n", 1);
//	ft_printf("%xmas\n", -123);
//	ft_printf("%Xmas\n", -99);
//	ft_printf("%dmas\n", -18454);		
//	ft_printf("%dmsa\n", 18);		
//	ft_printf("*********************\n");
totaloriginal+=ft_printf("% imas\n", 1);
totaloriginal+=ft_printf("% imas\n", -1);
totaloriginal+=ft_printf("%#xmas\n", -123);
totaloriginal+=ft_printf("%#Xmas\n", -99);
totaloriginal+=ft_printf("%+dmas\n", -18454);		
totaloriginal+=ft_printf("%+dmsa\n", 18);		
	ft_printf("*********************\n");
	ft_printf("mio:%i \noriginal:%i \n", totalmio, totaloriginal); */
	printf(" % 1s\n", "");
	printf("% 1s \n", "");
//	ft_printf("*********************\n");
//	ft_printf(" % 1s\n", "");
//	ft_printf("% 1s \n", "");

	int tm, tp;
	tm = 0;
	tp = 0;
	ft_printf("\n");
//	tp+=printf("\n %#x ", 0);
	tp+=printf(" %#x ", -1);
//	tp+=printf(" %#x ", 1);
//	tp+=printf(" %#x ", 9);
//	tp+=printf(" %#x ", 10);
//	tp+=printf(" %#x ", 11);
//	tp+=printf(" %#x ", 15);
//	tp+=printf(" %#x ", 16);
//	tp+=printf(" %#x ", 17);
//	tp+=printf(" %#x ", 99);
//	tp+=printf(" %#x ", 100);
//	tp+=printf(" %#x ", 101);
//	tp+=printf(" %#x ", -9);
//	tp+=printf(" %#x ", -10);
//	tp+=printf(" %#x ", -11);
//	tp+=printf(" %#x ", -14);
//	tp+=printf(" %#x ", -15);
//	tp+=printf(" %#x ", -16);
//	tp+=printf(" %#x ", -99);
//	tp+=printf(" %#x ", -100);
//	tp+=printf(" %#x ", -101);
//	tp+=printf(" %#x ", INT_MAX);
//	tp+=printf(" %#x ", INT_MIN);
//	tp+=printf(" %#x ", LONG_MAX);
//	tp+=printf(" %#x ", LONG_MIN);
//	tp+=printf(" %#x ", UINT_MAX);
//	tp+=printf(" %#x ", ULONG_MAX);
//	tp+=printf(" %#x ", 9223372036854775807LL);
//	tp+=printf(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//	tp+=printf(" %#x%#x ", INT_MAX, INT_MIN);
	ft_printf("\n*");
//	tm+=ft_printf("P %#x ", 0);
	tm+=ft_printf(" %#x ", -1);
//	tm+=ft_printf(" %#x ", 1);
//	tm+=ft_printf(" %#x ", 9);
//	tm+=ft_printf(" %#x ", 10);
//	tm+=ft_printf(" %#x ", 11);
//	tm+=ft_printf(" %#x ", 15);
//	tm+=ft_printf(" %#x ", 16);
//	tm+=ft_printf(" %#x ", 17);
//	tm+=ft_printf(" %#x ", 99);
//	tm+=ft_printf(" %#x ", 100);
//	tm+=ft_printf(" %#x ", 101);
//	tm+=ft_printf(" %#x ", -9);
//	tm+=ft_printf(" %#x ", -10);
//	tm+=ft_printf(" %#x ", -11);
//	tm+=ft_printf(" %#x ", -14);
//	tm+=ft_printf(" %#x ", -15);
//	tm+=ft_printf(" %#x ", -16);
//	tm+=ft_printf(" %#x ", -99);
//	tm+=ft_printf(" %#x ", -100);
//	tm+=ft_printf(" %#x ", -101);
//	tm+=ft_printf(" %#x ", INT_MAX);
//	tm+=ft_printf(" %#x ", INT_MIN);
//	tm+=ft_printf(" %#x ", LONG_MAX);
//	tm+=ft_printf(" %#x ", LONG_MIN);
//	tm+=ft_printf(" %#x ", UINT_MAX);
//	tm+=ft_printf(" %#x ", ULONG_MAX);
//	tm+=ft_printf(" %#x ", 9223372036854775807LL);
//	tm+=ft_printf(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//	tm+=ft_printf(" %#x%#x ", INT_MAX, INT_MIN);

/*	ft_printf("\n*********** X **********\n");
	printf("\n %#X ", 0);
	printf(" %#X ", -1);
	printf(" %#X ", 1);
	printf(" %#X ", 9);
	printf(" %#X ", 10);
	printf(" %#X ", 11);
	printf(" %#X ", 15);
	printf(" %#X ", 16);
	printf(" %#X ", 17);
	printf(" %#X ", 99);
	printf(" %#X ", 100);
	printf(" %#X ", 101);
	printf(" %#X ", -9);
	printf(" %#X ", -10);
	printf(" %#X ", -11);
	printf(" %#X ", -14);
	printf(" %#X ", -15);
	printf(" %#X ", -16);
	printf(" %#X ", -99);
	printf(" %#X ", -100);
	printf(" %#X ", -101);
	printf(" %#X ", INT_MAX);
	printf(" %#X ", INT_MIN);
	printf(" %#X ", LONG_MAX);
	printf(" %#X ", LONG_MIN);
	printf(" %#X ", UINT_MAX);
	printf(" %#X ", ULONG_MAX);
	printf(" %#X ", 9223372036854775807LL);
	printf(" %#X %#X %#X %#X %#X %#X %#X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %#X%#X\n ", INT_MAX, INT_MIN);
	ft_printf("\n* X **********\n");
	ft_printf(" %#X ", 0);
	ft_printf(" %#X ", -1);
	ft_printf(" %#X ", 1);
	ft_printf(" %#X ", 9);
	ft_printf(" %#X ", 10);
	ft_printf(" %#X ", 11);
	ft_printf(" %#X ", 15);
	ft_printf(" %#X ", 16);
	ft_printf(" %#X ", 17);
	ft_printf(" %#X ", 99);
	ft_printf(" %#X ", 100);
	ft_printf(" %#X ", 101);
	ft_printf(" %#X ", -9);
	ft_printf(" %#X ", -10);
	ft_printf(" %#X ", -11);
	ft_printf(" %#X ", -14);
	ft_printf(" %#X ", -15);
	ft_printf(" %#X ", -16);
	ft_printf(" %#X ", -99);
	ft_printf(" %#X ", -100);
	ft_printf(" %#X ", -101);
	ft_printf(" %#X ", INT_MAX);
	ft_printf(" %#X ", INT_MIN);
	ft_printf(" %#X ", LONG_MAX);
	ft_printf(" %#X ", LONG_MIN);
	ft_printf(" %#X ", UINT_MAX);
	ft_printf(" %#X ", ULONG_MAX);
	ft_printf(" %#X ", 9223372036854775807LL);
	ft_printf(" %#X %#X %#X %#X %#X %#X %#X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %#X%#X ", INT_MAX, INT_MIN);*/
//	system ("leaks a.out");

	printf("\n mio: %i -- print: %i", tm, tp);
	return (0);
}
