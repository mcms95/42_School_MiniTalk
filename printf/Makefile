NAME	=	libftprintf.a

CC	=	cc
CFLAGS	=	-Werror	-Wall	-Wextra

SRC =	ft_printf.c	ft_printchar.c ft_printhex.c	ft_printnum.c	ft_printptr.c	ft_printstr.c ft_printunsigned.c	

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	@ar rcs $@ $^

clean:	
	@rm	-f	$(OBJ)

fclean:	clean
	@rm	-f	$(NAME)

re:	fclean	all

.PHONY:	all clean fclean re