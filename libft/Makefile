# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 18:37:00 by rmatsuba          #+#    #+#              #
#    Updated: 2023/09/26 20:09:02 by rmatsuba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a
AR = ar 
ARFLAGS = rcs
CC = cc
NAME = libft

all : ${NAME}
${NAME} : ${OBJS}
	${AR} ${ARFLAGS} ${NAME}.a ${OBJS}
.c.o : 
	${CC} ${CFLAGS} -c $< -o $@ -I .
clean : 
	rm -f ${OBJS}
fclean : 
	rm -f ${LIB}
re :
	${MAKE} fclean
	${MAKE} all
