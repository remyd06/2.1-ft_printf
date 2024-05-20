/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:32:47 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/13 16:38:17 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_low(unsigned int nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putnbr_hex_low(nb / 16);
	}
	ft_putchar(base[nb % 16]);
	return (i + 1);
}
