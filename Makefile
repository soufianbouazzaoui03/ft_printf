# -*- MakeFile -*-

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_format.c ft_putptr.c

OBJ = ${SRC:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJ}
	@ar rc $@ ${OBJ}

%.o : %.c ft_printf.h	
	cc -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all