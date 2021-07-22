SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

HEADER		= includes

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

NAME		= libft.a

.c.o:
			${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			 
re:			fclean	all
