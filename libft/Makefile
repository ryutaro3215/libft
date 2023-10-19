# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 18:37:00 by rmatsuba          #+#    #+#              #
#    Updated: 2023/10/18 11:17:40 by ryutaro3205      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_striteri.c \
ft_tolower.c ft_toupper.c ft_substr.c

BONUS_SRCS = ft_lstadd_front.c ft_lstadd_back.c \
ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a
AR = ar
ARFLAGS = rcs
CC = cc
NAME = libft

all : ${NAME}
${NAME} : ${OBJS}
	${AR} ${ARFLAGS} ${NAME}.a ${OBJS}
bonus: ${BONUS_OBJS} ${OBJS}
	${AR} ${ARFLAGS} ${NAME}.a ${BONUS_OBJS} ${OBJS}
.c.o :
	${CC} ${CFLAGS} -c $< -o $@ -I .
clean :
	rm -f ${OBJS} ${BONUS_OBJS}
fclean :
	rm -f ${LIB}
re :
	${MAKE} fclean
	${MAKE} all
