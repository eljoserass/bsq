##
## EPITECH PROJECT, 2020
## my_printf
## File description:
## only makefile
##

LIB_NAME=	lib_bsq.a

LIB_PATH=	lib/src/

LIB_SRC	=	ptr_manage/my_arraylen.c	\
			ptr_manage/my_putstr.c		\
			ptr_manage/my_putchar.c 	\
			ptr_manage/my_revstr.c		\
			ptr_manage/my_strdup.c 		\
			ptr_manage/my_get_row_len.c	\
			ptr_manage/my_getnbr.c		\
			ptr_manage/my_strlen.c 		\

LIB_SRCS=	$(addprefix $(LIB_PATH), $(LIB_SRC))

LIB_OBJS=	$(LIB_SRCS:.c=.o)

RM		=	rm -f

BIN_NAME=	bsq

BIN_PATH=	src/

BIN_SRC	=	main.c	 					\
			my_count_y.c 				\
			my_get_error.c 				\
			my_put_memory.c 			\
			my_get_int_map.c 			\
			my_get_small_number.c 		\
			my_calculate_bigger_square.c\
			my_open_n_read_file.c 		\
			my_get_size_n_pos.c 		\
			my_put_x_in_map.c 			\
			my_print_bigger_square.c	\
			bsq.c						\

BIN_SRCS=	$(addprefix $(BIN_PATH), $(BIN_SRC))

BIN_OBJS=	$(BIN_SRCS:.c=.o)

CFLAGS	+=	-I./include -I./lib/include
CFLAGS	+= -W -Wall -Werror -g3
LDFLAGS	+=	-L./lib
LDLIBS	+=	 -l_bsq

GCC		=	gcc

all:    lib   $(BIN_NAME)

lib:		$(LIB_NAME)

$(LIB_NAME):	$(LIB_OBJS)
	ar rc $(LIB_NAME) $(LIB_OBJS)
	cp $(LIB_NAME) lib/
	$(RM) $(LIB_NAME)

clean_lib:
	$(RM) $(LIB_OBJS)

fclean_lib: clean_lib
	$(RM) lib/$(LIB_NAME)

$(BIN_NAME):	$(BIN_OBJS)
	$(GCC) -o $(BIN_NAME) $(BIN_OBJS) $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) $(BIN_OBJS)

fclean: clean fclean_lib
	$(RM) lib/$(LIB_NAME)
	$(RM) $(BIN_NAME)

re: fclean all