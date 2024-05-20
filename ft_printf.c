/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:25:16 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/14 11:36:15 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	scan(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_adress(va_arg(args, void *)));
	else if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (format == 'u')
		return (ft_putnbr_uns(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_hex_low(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_putnbr_hex_upp(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		lentot;
	va_list	args;

	i = 0;
	lentot = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			lentot += scan(args, format[i]);
		}
		else
		{
			lentot += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (lentot);
}

/*
int	main(void)
{
	char *str;
	int	i;

	str = "test";
	i = 0;
	printf("\e[1;4;31mFT_PRINTF\e[0;37m\n\n");
	ft_printf("For \"%%d\" --> %d\n", 3);
	ft_printf("For \"%%p\" --> %p\n", &str);
	ft_printf("For \"%%s\" --> %s\n", str);
	ft_printf("For \"%%u\" --> %u\n", 42);
	ft_printf("For \"%%x\" --> %x\n", -1);
	ft_printf("For \"%%X\" --> %X\n", -1);
	ft_printf("For \"%%n\" --> %i\n", 3);
	ft_printf("For \"%%\"  --> %%\n");
	printf("\n\e[1;4;31mORIGINAL PRINTF\e[0;37m\n\n");
	printf("For \"%%d\" --> %d\n", 3);
	printf("For \"%%p\" --> %p\n", &str);
	printf("For \"%%s\" --> %s\n", str);
	printf("For \"%%u\" --> %u\n", 42);
	printf("For \"%%x\" --> %x\n", -1);
	printf("For \"%%X\" --> %X\n", -1);
	printf("For \"%%n\" --> %i\n", 3);
	printf("For \"%%\"  --> %%\n");
}
*/