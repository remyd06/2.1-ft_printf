/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:42:42 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/13 16:38:41 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_upp(unsigned int nb)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_putnbr_hex_upp(nb / 16);
	}
	ft_putchar(base[nb % 16]);
	return (i + 1);
}
