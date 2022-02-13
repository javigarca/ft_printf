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
			  ft_utoa.c

#BONUSSRCS	= ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c

HEADER		= ft_printf.h

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

#bonus:		${BONUSOBJS} ${HEADER}
#				${AR} ${NAME} ${BONUSOBJS}
#				${LIB} ${NAME}

clean:		
			${RM} ${OBJS} ${BONUSOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re bonus
