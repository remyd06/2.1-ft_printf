/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:24:52 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/13 15:52:30 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putnbr_hex_low(unsigned int nb);
int	ft_putnbr_hex_upp(unsigned int nb);
int	ft_putnbr_uns(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_print_adress(void *p);

#endif
