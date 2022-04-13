# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migonzal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 09:34:22 by migonzal          #+#    #+#              #
#    Updated: 2022/04/12 10:21:34 by migonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c ./Libft/ft_strdup.c ./Libft/ft_strjoin.c ./Libft/ft_memcpy.c \
		./Libft/ft_memmove.c ./Libft/ft_strlen.c ./Libft/ft_split.c ./Libft/ft_atoi.c \
		./Libft/ft_isdigit.c \
		./list/ft_lstnew.c \
		./list/ft_lstadd_back.c \
		./list/ft_lstadd_front.c \
		./list/ft_lstlast.c  \
		./list/ft_lstsize.c \
		./list/ft_lstiter.c \
		./list/ft_lstdelone.c \
		./movements/ft_pa.c \
		./movements/ft_pb.c \
		./movements/ft_ra.c \
		./movements/ft_rb.c \
		./movements/ft_sa.c \
		./movements/ft_sb.c \
		./movements/ft_ss.c \
		./movements/ft_rra.c \
		./movements/ft_rrr.c \
		./movements/ft_rrb.c \
		leer.c \
		ft_ordered.c \
		ft_radix.c \
		free.c \
		ft_repeated.c \
		./less3/ft_order1.c \
		./less3/ft_order2.c \
		./less3/ft_order3.c \
		./less3/ft_auxs1.c




OBJS = ${SRCS:.c=.o}

HDRS = push_swap.h

NAME = push_swap

cc = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: ${HDRS}
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	$(CC) $(OBJS) -o $(NAME) 

all: ${NAME}

clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re


