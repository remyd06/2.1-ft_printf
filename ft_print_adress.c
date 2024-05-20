/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:27:07 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/13 16:39:11 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(size_t nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putnbr_hex(nb / 16);
	}
	ft_putchar(base[nb % 16]);
	i++;
	return (i);
}

int	ft_print_adress(void *p)
{
	unsigned int	i;

	i = 0;
	if (!p)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	i = ft_putnbr_hex((size_t)p);
	return (i + 2);
}
