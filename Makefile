# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 16:53:53 by javigarc          #+#    #+#              #
#    Updated: 2022/02/24 21:04:56 by javigarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a


SRCS		= ft_printf.c \
			  ft_printf_utils1.c \
			  ft_itoa.c \
			  ft_utoa.c \
			  ft_printf_utils2.c 

HEADER		= ft_printf.h


OBJS		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

AR			= ar rc

LIB			= ranlib

CFLAGS		= -Wall -Wextra -Werror -I. -c

.c.o:
			${CC} ${CFLAGS} $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${HEADER}
				${AR} ${NAME} ${OBJS} 
				${LIB} ${NAME}
 
all:		${NAME}

bonus:		all

clean:		
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re bonus
