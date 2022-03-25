# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 12:08:06 by zsyyida           #+#    #+#              #
#    Updated: 2022/03/21 11:58:42 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_printf_utils1.c ft_printf_utils2.c ft_printf_utils3.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

%.o:%.c

			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
					ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
					$(RM) $(OBJS)
fclean:	clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:	all clean fclean re
