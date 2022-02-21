# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 16:53:53 by javigarc          #+#    #+#              #
#    Updated: 2022/02/11 13:07:44 by javigarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a


SRCS		= ft_printf.c \
			  ft_printf_utils1.c \
			  ft_itoa.c \
			  ft_utoa.c \
			  ft_printf_utils2.c 

#BONUSSRCS	= ft_printf_bonus.c \
			  ft_printf_bonus_utils1.c \
			  ft_itoa_bonus.c \
			  ft_utoa_bonus.c \
			  ft_printf_bonus_utils2.c 
			  
HEADER		= ft_printf.h

#BONUSHEADR  = ft_printf_bonus.h

OBJS		= ${SRCS:.c=.o}

#BONUSOBJS	= ${BONUSSRCS:.c=.o}

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

#bonus:		${BONUSOBJS} ${BONUSHEADER}
#				${AR} ${NAME} ${BONUSOBJS}
#				${LIB} ${NAME}

clean:		
			${RM} ${OBJS} ${BONUSOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re bonus
