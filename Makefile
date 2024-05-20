# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 10:24:39 by rdedola           #+#    #+#              #
#    Updated: 2024/05/13 15:31:24 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF = libftprintf.a

SRCS =	ft_putchar.c \
		ft_putnbr_hex_low.c \
		ft_putnbr_hex_upp.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putnbr_uns.c \
		ft_print_adress.c \
		ft_printf.c \

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

DEF_COLOR = \033[0;39m
COLOR = \033[1;32m

all:		${PRINTF}

%.o:		%.c
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${COLOR}$?		✓${DEF_COLOR}"

${PRINTF}:	${OBJS}
		@ar rcs $@ $?
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║    Printf compiled!   ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

clean:
		@${RM} ${OBJS}
		@echo "${COLOR}╔═══════════════════════╗${DEF_COLOR}"
		@echo "${COLOR}║    Printf  cleaned!   ║${DEF_COLOR}"
		@echo "${COLOR}╚═══════════════════════╝${DEF_COLOR}"

fclean:		clean
		@${RM} ${PRINTF}

re:			fclean all

.PHONY: all clean fclean re