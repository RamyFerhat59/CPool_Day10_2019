##
## EPITECH PROJECT, 2018
## CPool_Day10
## File description:
## Makefile
##

SRCS	= 	my_showmem.c        	 \
		my_str_isprintable.c	 \
		my_compute_power_rec.c   \
		my_showstr.c          	 \
		my_str_isupper.c 		 \
		my_compute_square_root.c \
		my_show_word_array.c  	 \
		my_strlen.c 			 \
		my_find_prime_sup.c      \
		my_sort_int_array.c   	 \
		my_strlowcase.c 		 \
		my_getnbr.c              \
		my_strcapitalize.c    	 \
		my_strncat.c 			 \
		my_isneg.c               \
		my_strcat.c           	 \
		my_strncmp.c 			 \
		my_is_prime.c            \
		my_strcmp.c           	 \
		my_strncpy.c 			 \
		my_putchar.c             \
		my_strcpy.c           	 \
		my_strstr.c 			 \
		my_put_nbr.c             \
		my_str_isalpha.c	\
		my_strupcase.c		\
		my_putstr.c	\
		my_str_islower.c	\
		my_swap.c	\
		my_revstr.c	\
		my_str_isnum.c 			


OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

NAME	=	libmy.a

HEADER	=	my.h

all:	$(NAME)

$(NAME):$(OBJS)
	ar rc libmy.a $(OBJ)
	cp $(NAME) ../
	mkdir ../../include/
	cp $(HEADER) ../../include/

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f ../../include/$(HEADER)
	rm -f ../$(NAME)
	rm -r -f ../../include

re:	fclean all
