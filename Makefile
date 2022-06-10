# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 13:53:50 by mbertin           #+#    #+#              #
#    Updated: 2022/06/10 09:13:07 by mbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_ext.c \

OBJS = ${SRCS:%c=%o}

NAME = libftprintf.a

AR = ar rcs

CC = gcc

RM = rm -f 

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS} 
	${AR} ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re